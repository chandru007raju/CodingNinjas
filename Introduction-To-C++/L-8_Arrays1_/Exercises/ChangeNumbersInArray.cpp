#include<iostream>
using namespace std;

void changeArray(int arr[], int n){
    for(int i=0;i<n;i++){
        arr[i]++;
    }

}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    changeArray(arr,n);
    printArray(arr,n);
}