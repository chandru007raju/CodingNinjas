#include<iostream>
#include "Constant.cpp"

int main(){
    fraction const f1(10,20);

    fraction const f2(20,30);

    // f1.add(f2); //This is Not possible because its a private property so cannot be changed
}