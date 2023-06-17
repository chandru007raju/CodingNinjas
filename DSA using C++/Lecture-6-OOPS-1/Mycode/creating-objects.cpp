#include <iostream>

#include "intro-to-oops.cpp"

int main(){

    char name[100] = "chandru";

    // Statically creating an Object
    student s1; //This Calls A inbuilt Constructor

    s1.RollNo = 23;
    s1.age = 23;
    s1.name = name;

    cout<<s1.age<< " "<<s1.RollNo<<" "<<endl;

    s1.print();

    // Dynamically creating an Object
    student* s3 = new student; 

    // (*s3).age = 25;
    // (*s3).RollNo = 25;

    // OR

    s3->age = 35;
    s3->RollNo = 35;

    //
    // (*s3).name = "Myself";
    //OR
    (*s3).name = name;

    (*s3).print();

    
    student s2; //This Calls A inbuilt Constructor
    s2.age = 24;
    s2.RollNo = 24;

    name[5] = 'u';
    s2.name = name;

    s2.print();

    s1.print(); //Observe this properly

    return 0;
}
