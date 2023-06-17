#include<iostream>
#include "student.cpp"

int main(){

    // Destructor -->

    // Same name as Our Class
    // No return type
    // No input arguements

    student s1(10,1001);

    student s2;
    s2 = s1;

    student * s3 = new student(20,2001);// Destructor will not be called for s3 as this object is created in the dynamic memory so we manualyy have to delete this memeory then the destructor gets called automatically;

    // delete s3; // this delete calls the Destructor for s3;
}