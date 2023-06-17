#include<iostream>
#include "student.cpp"

int main(){

    student s1(10,101);

    student s8(s1); // This Calls a Copy Constructor which works like this

    // s8.student(s1);
    //this contains the address of s8 and the properties of s1 are passed as arguements
    cout<<"s1 : ";
    s1.display();

    cout<<"s8 : ";
    s8.display();

    student *s4 = new student(20,201);

    student *s9 = new student(*s4);

    cout<<"s4 : ";
    (*s4).display();

    cout<<"s9 : ";
    (*s9).display();

    // Copy Assignment Operator -->
    student s7;
    s7 = s1;  // Copy Assignment Operator

    cout<<"s7 : ";
    s7.display();

    student s10;
    s10 = (*s9); // Copy Assignment Operator

    cout<<"s10 : ";
    s10.display();

    student* s11 = new student;
    (*s11) = s10; // Copy Assignment Operator

    cout<<"s11 : ";
    (*s11).display();
}