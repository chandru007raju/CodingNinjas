#include<iostream>

#include "Prog.cpp"
using namespace std;

int main()
{

    // Array s(5); // Static Memory -->

    Array s; // Dynamically -->

    cout<<"Check stack Empty :";
    cout<<s.isEmpty()<<endl;
    cout<<"Check stack size: ";
    cout<<s.size()<<endl;

    // s.pop();
    // cout<<endl;
    cout<<"inserted stack elements : ";
    s.push(1);
    cout<<s.top();
    s.push(2);
    cout<<s.top();
    s.push(3);
    cout<<s.top();
    s.push(4);
    cout<<s.top()<<endl;
    s.push(5);
    cout<<s.top()<<endl;

    s.push(5);
    cout<<s.top()<<endl;

    cout<<"Check stack Empty :";
    cout<<s.isEmpty()<<endl;
    cout<<"Check stack size: ";
    cout<<s.size()<<endl;

 // POP ELEMENTS -->
    cout<<s.pop()<<endl; 
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;   
    cout<<s.pop()<<endl; 
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    return 0;

}