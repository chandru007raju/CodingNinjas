#include <iostream>
#include <cmath>

using namespace std;

int main(){   // bin = 111 --> dec = 7
    int n;
    cin>>n;

    // count = 0;
    // input --> 1111
    // 1
    // if rem =  1 --> dec  = 2^count; --> 1
    // if rem = 0 --> dec = 0
    // +
    // if rem = 1 --> 2^count; --> 4 + previous decimal; -->5
    // if rem = 0 --> 0 + previous dec = 1
    // dec  = dec + rem *2^count;

    int PlaceValue = 0;
    int rem;
    int dec =0;
    while(n){
        rem = n%10;
        dec = dec + rem * pow(2,PlaceValue);
        PlaceValue++;
        n = n/10;
    }
     cout<<dec;
}
