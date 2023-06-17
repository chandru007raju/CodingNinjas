#include<iostream>
using namespace std;

class student{

    // static int totalstudents; // use Gettotalmembers

    public:
    
    int Age;
    int RollNo;
    static int totalstudents; // use totalstudents


    student(){
        totalstudents++;
    }

    static int Gettotalmembers(){ // static functions must Use only the static Properties
        return totalstudents;
    }

    /*
    static int GetRollNo(){ // Error becoz this uses the object property so we cannot make this static Function -->
        return RollNo;
    }
    */


};

int student :: totalstudents = 0; // initialization of static property of the class