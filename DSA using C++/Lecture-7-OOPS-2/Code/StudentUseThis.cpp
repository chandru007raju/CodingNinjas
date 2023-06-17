#include<iostream>
#include "student.cpp"
#include<string.h>

int main(){

    char name [100] = "chandu";
    student s1(23,name);
    name[6] = 'u';
    student s2(24,name);

    s1.display();
    s2.display();
    s1.display();

    student s5 = s2; //  Copy constructor will be called ;
    s5.display();

}