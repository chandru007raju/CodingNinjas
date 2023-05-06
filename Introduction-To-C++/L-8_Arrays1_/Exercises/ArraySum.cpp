#include <iostream>
using namespace std;

int sumarray(int array[],int size){
    int sum = 0;
    for (int i=0;i<size;i++){
        sum = sum + array[i];
    }
    return sum;
}

int main(){
    int N;
    cin>>N;
    int* arr = new int [N];
    int start = 1;
    for(int i=0;i<N;i++){
        arr[i] = start;
        cout<<arr[i]<<" ";
        start+=2;
    }
    cout<<endl;
    int sum = sumarray(arr,N);
    cout<<sum<<endl;
}