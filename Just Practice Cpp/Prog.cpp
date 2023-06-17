#include <iostream>
using namespace std;

class Student{
    public :
        char *name;
        int rollNo;

        void print(){
            cout << name << " "  <<  rollNo << " ";
        }
};

int main() {
    char name[] = "Misha";
    Student s1;
    s1.name = name; // This just copies the address of the Array --> so changes to the array reflects everywhere it is bieng used.
    s1.rollNo = 101;

    name[0] = 'N';
    Student s2;
    s2.name = name; // This just copies the address of the Array --> so changes to the array reflects everywhere it is bieng used.
    s2.rollNo = 102;

    s1.print();
    s2.print();
}