#include<iostream>
using namespace std;

class fraction{

    private:

    int numerator ;
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
        int j = min(numerator,denominator);
        for(int i=1;i<=j;i++){
            if(numerator % i == 0 && denominator %i == 0 ){
                gcd = i;
            }
        }
        numerator = numerator/gcd;
        denominator = denominator/gcd;
    }
    
    // void add(fraction f2){ //creating new fraction object f2 here and copying the main.f2 --> we should avoid creating new copy of main.f2 becoz we just need that value to just add those values to our result and also this main.f2 should not be changed from this so we just pass this as a const reference so

    // We should rather create this function like this --> pass by reference but it should not effect the main.f2 properties so we use const keyword ;
    void add(fraction const &f2){ 
        int lcm = denominator *f2.denominator;
        int x = lcm/denominator;
        int y = lcm/f2.denominator;
        int num =  x * numerator + y * f2.numerator;

        numerator = num;
        denominator = lcm;
        simplify();
    }

      void multiply(fraction const &f){
        this -> numerator = this -> numerator * f.numerator;
        this -> denominator = this -> denominator * f.denominator;
        this -> simplify();
    }

};