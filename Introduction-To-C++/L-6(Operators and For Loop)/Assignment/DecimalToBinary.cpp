// #include<iostream>
// #include<cmath>

// using namespace std;

// int main(){
//     int decimal ;
//     cin>> decimal;

//     // placeValue = 0;
//     // 7 --> 1 1 1
//     // rem = 7%2 --> 1 or 0;
//     // bin = bin + rem * pow(10, placeValue); // in last Case --> bin + (rem-->1)* 10^(PlaceValue-->2) = -->11 + 1 * 100
//     // dec= dec/2;

// // --> Practical way of Converting decimal to binary

//     // 2|7
//     // 2|3 -->1
//     // 2|1 -->1
//     //  |0 -->1

//     int rem;
//     int binary = 0;
//     int PlaceValue = 0;
//     while(decimal){
//         rem  = decimal % 2;
//         binary = binary + rem * pow(10,PlaceValue);
//         decimal = decimal /2;
//         PlaceValue++;
//     }
//     cout<<binary;

    
// }

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int dec; // 10 --> 101
    cin>> dec;

    int placevalue = 0;
    int bin = 0;
    int rem;
    while(dec){
        rem = dec%2;
        bin = rem * pow(10,placevalue) + bin;
        dec = dec/2;
        placevalue++;
    }
}