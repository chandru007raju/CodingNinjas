#include <iostream>
using namespace std;

class student{
    public:

    int salary;
    int age;
    string name;
};

int main(){

    student s1; //Statically allocated

    student * s2 = new student;// Dynamically Allocated

    s1.age = 24;

    (*s2).age = 29;
    
    cout<<s1.age<<endl;
    cout<<(*s2).age<<endl;

}