#include<iostream>

#include "student.cpp"

using namespace std;

int main(){

    student s1;
    s1.RollNo = 101;
    // s1.Age = 20; //  Not Possible to set when property is private;

    //OR
    s1.SetAge(20,123); //  we are using the class/setter function to set the Private property of the class;
    cout<<s1.RollNo<<" "<<s1.GetAge()<<endl;

    student s4(40);

    student s5(50,50);
    s5.display();
    s4.display();
    //OR
    // student* s5 = new student(50,50);

    //

    



    return 0;
}

