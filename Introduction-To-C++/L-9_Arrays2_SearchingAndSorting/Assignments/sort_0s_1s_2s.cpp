#include<iostream>
using namespace std;

void swap(int arr[], int n,int n1,int n2){
    int temp = arr[n1];
    arr[n1] = arr[n2];
    arr[n2] = temp; 
}

void swap1(int arr[],int n){
    int s = 0;
    int l = n-1;
    int i = 0;
    while(i<=l){
        if(arr[i] == 0){
            swap(arr,n,s,i);
            s++;
            i++;
        }else if(arr[i] == 2){
            swap(arr,n,l,i);
            l--;
        }else{
            i++;
        }
    }
    
}

int main(){
    int arr[]  ={2,1,0,2,0,1,1,0,1,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    swap1(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}