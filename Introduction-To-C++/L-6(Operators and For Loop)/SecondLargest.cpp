#include <iostream>
using namespace std;

int main(){
    int t;
    cin>> t;

    int largest = INT_MIN;
    int secondLargest;
    int num;
    while(t--){
        cin>>num;
        if(num > largest){
            secondLargest = largest;
            largest = num;            
        }
        if(num > secondLargest && num < largest){
            secondLargest = num;
        }

    }
    cout<<secondLargest<<endl;
    return 0;

}