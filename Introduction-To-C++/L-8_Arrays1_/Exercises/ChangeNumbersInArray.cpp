#include<iostream>
using namespace std;

//  THIS Program tells that we NEED NOT RETURN THE Array back from a Function -->

// Because the change is reflected directly into the array as we used the address in the function to make changes to the Array;

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
void Reverse(int arr[],int n){
    for(int i=0,j=n-1;i<=j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
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
    // Reverse(arr,n);
    printArray(arr,n);
}