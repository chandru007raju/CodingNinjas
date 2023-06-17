#include<iostream>
using namespace std;

#include "static members.cpp"

int main(){

    student s1;

    student s2;

    student s3,s4,s5,s6;

    // cout<< student::Gettotalmembers()<<endl; // if private

    cout<< student::totalstudents<<endl; // if public

}