#include <iostream>
using namespace std;

void printAllPairs(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}

int* takeinput(int size){
    int *arr =new int[size];
    cout<<"provide the array elements"<<endl;
    for(int i =0;i<size;i++){
        cin>>arr[i];
        cout<<"input taken"<<endl;
    }
    return arr;
}

int main(){
    int *arr = NULL;
    int N;
    cout<<"enter the array size: ";
    cin>>N;
    // arr = new int[N];
    arr = takeinput(N);
    // cout<<"array elements are : ";
    // for(int i=0;i<N;i++){
    //     cout<<arr[i];

    // }
    printAllPairs(arr,N);

    cout<<endl<<"Done";
    
}