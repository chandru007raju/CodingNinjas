#include<iostream>
using namespace std;

class student {

    public:
    int Age;
    int RollNo;
    char * name;

    //Lets See wat a Default Constructor is

    //Same name as class
    //No return type 
    //No input arguements  


    student(){ //  Default Constructor
        
        cout<<"Constructor Called --> ";
    }
};

