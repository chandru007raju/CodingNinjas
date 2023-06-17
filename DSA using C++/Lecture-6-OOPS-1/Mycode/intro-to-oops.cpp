#include<iostream>
using namespace std;

class student{

public: // Access Modifiers -> 3 Types 1.public --> 2.Private -->3.Protected
// OR
// private:

    int RollNo;
    char* name;
    int age;

    student print(){
        cout<<RollNo<<" "<<age<<" "<<name<<endl;
    }

};