#include<iostream>
#include "student.cpp"

int main(){

    student s1; // Default Constructor

    s1.SetAge(5,123);
    s1.RollNo = 55;

    s1.display();

    student s2(s1); // parenterized constructor 1 ;

    student s3(22,222); // parenterized constructor 2 ;

    student s4(s3); // Copy Constructor ;

    student s5;
    s5 = s4; // Copy Assignment Operator ;

    student s6 = s5;  // Copy Constructor will be called rather than copy assignment operator ;




    





}