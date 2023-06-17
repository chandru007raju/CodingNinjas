#include<iostream>
#include "initialization.cpp"

int main(){

    student s1(102);// We are passing the Roll No as arguement as it is private we cannot assign it twice 
    s1.Age = 23;

    s1.display();

    student s2(103,24); // we have initialized both the RollNo and the Ageproperties;
    s2.display();
}