#include <iostream>
using namespace std;
bool isSorted(int arr[],int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool is_smallSorted = isSorted(arr + 1, n-1);
    // if(is_smallSorted){
    //     return true;
    // }else{
    //     return false;
    // }

    return is_smallSorted;
}

int main(){

    int n;
    cin>>n;

    int * arr = new int [n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<isSorted(arr,n);
}