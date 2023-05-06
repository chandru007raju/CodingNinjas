
// WATCH VEDIO IF YOU DON'T GET IT RIGHT
// URL = https://www.youtube.com/watch?v=2h1dS1Sfyt0

//given an array rotate it left by d times.
//input {2, 6, 3, 1, 5}
//output after rotations by 2 times {3, 1, 5 ,1, 2, 6}

#include <iostream>
using namespace std;

void RotateArray(int arr[],int n,int d){
    
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i] = temp[i];  
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int s;
        cin>>s;

        int* arr = new int [s];
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
        int d;
        cin>>d;

        RotateArray(arr,s,d);
        for(int i=0;i<s;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        delete[]arr;
    }
}