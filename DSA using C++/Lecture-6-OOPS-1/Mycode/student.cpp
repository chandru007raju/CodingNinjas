#include<iostream>

using namespace std;

class student{

    public:
    int RollNo;

    private:
    int Age ;

    public:

    ~student(){
        cout<<"destructor called"<<endl;
    }

    student(){ //  Default Constructor
        
        cout<<"Constructor 1 Called --> "<<endl;
    }

    student(int r){ //  Parameterized Constructor
        
        cout<<"Parameterized Constructor 1 Called --> "<<endl;;
        RollNo = r;
    }
    //OR 
    // student(int RollNo){ //  Parameterized Constructor
        
    //     cout<<"Parameterized Constructor 1 Called --> ";
    //     this -> RollNo = RollNo;
    // }

    student(int r,int a){ //  Parameterized Constructor
        
        cout<<"Parameterized Constructor 2 Called --> "<<endl;
        RollNo = r;
        Age = a;
    }
    //OR
    // student(int RollNo,int Age){ //  Parameterized Constructor
        
    //     cout<<"Parameterized Constructor 2 Called --> ";
    //     this -> RollNo = RollNo;
    //     this -> Age = Age;
    // }


    void display(){
        cout<<RollNo<<" "<<Age<<endl;
    }

     //  Write private Property with Check facility So age should not be Zero;
    void SetAge(int a,int password){
        if(password != 123){
            return;
        }
        if(a < 0){
            return;
        }
        Age = a;
    }
    //OR
    // void SetAge(int Age){
    //     this->Age = Age;
    // }

    //
    int GetAge(){ //  Read Private Property
        return Age;
    }
};