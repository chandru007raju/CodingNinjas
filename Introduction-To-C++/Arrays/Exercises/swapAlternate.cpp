#include <iostream>
using namespace std;

int SwapArray(int array[],int s){
    for (int i=0;i<s-1;i+=2){
        int temp = array[i];
        array[i] = array[i+1];
        array[i+1] =temp;
    }
    return 0;
}

int main(){
    int arr[] ={1,2,3,4,5,6,7};
    SwapArray(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

}