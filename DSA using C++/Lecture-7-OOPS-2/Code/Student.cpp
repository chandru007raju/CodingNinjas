#include<iostream>
#include<string.h>

using namespace std;

class student{

    public:

    int Age ;
    char* name;

    student(int Age,char* name){

        this->Age = Age;
    // Shallow Copy --> So Don't practice this way;
    // this-> name = name;

    // Deep Copy
    this -> name = new char[strlen(name)+ 1];
    strcpy(this->name,name); 

    }

    // Copy Constructor 
    student(const student &s){
        this->Age = s.Age;
        // shallow Copy
        //this.name = s.name;

        //  Deep Copy
        this -> name = new char[strlen(s.name) + 1];
        strcpy(this ->name,s.name);
    }
    void display(){
        cout<<Age<<" "<<name<<endl;
    }


};