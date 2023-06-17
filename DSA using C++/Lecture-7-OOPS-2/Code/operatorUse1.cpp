#include<iostream>
using namespace std;

#include "operator-overloading-1.cpp"

int main(){
    fraction f1(10,30);

    fraction f2(1,30);

    fraction f3 = f1 + f2;
    f1.print();
    f2.print();
    f3.print(); // Added

    fraction f4 = f1 * f2;
    f4.print(); // Multiply

    fraction f5(1,90);

    // if(f4 == f5){
    if(f4 == f3){        
        cout<<"equal";
    }else{
        cout<<"Not Equal";
    }
    









}

