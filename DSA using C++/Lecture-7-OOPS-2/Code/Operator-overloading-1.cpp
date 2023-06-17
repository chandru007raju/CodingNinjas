#include <iostream>
using namespace std;

class fraction{
    private:
    int numerator;
    int denominator;

    public:
    fraction(int numerator, int denominator){
        this -> numerator = numerator;
        this -> denominator = denominator;
    }

    void print(){
        cout << this -> numerator << "/" << this -> denominator << endl;
    }
      void simplify(){
          int gcd = 1;
          int j = (this -> numerator, this -> denominator);
          for (int i = 1; i <= j; i++){
              if (this -> numerator % i == 0 && this -> denominator % i == 0){
                  gcd = i;
              }
          }
          this -> numerator /= gcd;
          this -> denominator /= gcd;
      }

 
    void add(fraction const & f){
      int lcm = this -> denominator * f.denominator;
      this -> numerator = this -> numerator * f.denominator + f.numerator * this -> denominator;  
      this -> denominator = lcm;
      this -> simplify();  // we can also just write simplify();
    }


    // fraction add1(fraction const & f){ 
    //     int lcm = this -> denominator * f.denominator;
    //     int num = this -> numerator * f.denominator + f.numerator * this -> denominator;  
        
    //     fraction fNew(num,lcm);
    //     fNew.simplify();
    //     return fNew;
    // }

    //OR

    // Operator Overloaded Function-->
    
    fraction operator+(fraction const & f) const{ 
      int lcm = this -> denominator * f.denominator;
      int num = this -> numerator * f.denominator + f.numerator * this -> denominator;  
      
      fraction fNew(num,lcm);
      fNew.simplify();
      return fNew;
    }

    bool operator==(fraction const & f) const{
        return (this->numerator == f.numerator && this->denominator == f.denominator);
    }

    void multiply(fraction const &f){
        this -> numerator = this -> numerator * f.numerator;
        this -> denominator = this -> denominator * f.denominator;
        this -> simplify();
    }

    //OR
    // Operator Overloaded Function-->
    fraction operator*(fraction const &f) const{
        int n = this -> numerator * f.numerator;
        int d = this -> denominator * f.denominator;

        fraction fNew(n,d);
        fNew.simplify();
        return fNew;
    }



};