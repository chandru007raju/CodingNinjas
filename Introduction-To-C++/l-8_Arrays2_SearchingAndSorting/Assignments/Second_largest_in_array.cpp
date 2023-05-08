#include <iostream>
using namespace std;

int SecondLargest(int *arr,int s){
    int largest = arr[0];
    int secondLargest = INT_MIN;

    for(int i=0;i<s;i++){
        if(arr[i] >= largest){
            if(arr[i]> largest){
                secondLargest = largest;
                largest = arr[i];
            }

        }
        else if(arr[i]>secondLargest){
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main(){
    int t;
    cin>>t;

    while(t--){
         int s;
         cin>>s;
        
         int * arr = new int [s];

         for(int i=0;i<s;i++){
            cin>>arr[i];
         }

         cout<<SecondLargest(arr,s);
         delete[] arr;

    }    
    return 0;
}