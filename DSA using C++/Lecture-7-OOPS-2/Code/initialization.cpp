#include<iostream>
using namespace std;

class student{

    // int RollNo; // Now this behaves like constant..we can also do like this or -->

    public:
    int Age;
    int const RollNo; //Like this -->
    // int &x;

    student (int r) : RollNo(r)/*  ,x(Age)*/ {
        this->Age = Age;
    }

    student (int r,int a) : RollNo(r), Age(a)/*  ,x(Age)*/{

    }

    void display(){
        cout<<Age<<" "<<RollNo/* <<" "<< x  */ <<endl;
    }
};