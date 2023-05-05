#include <iostream>
using namespace std;

int LargeNumber(int arr[],int size){
int lar = -99999;
for(int i=0;i<size;i++){
    if(arr[i]>lar){
        lar = arr[i];
    }
}
return lar;
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
    int largeNum = -99999;
    largeNum = LargeNumber(arr,N);
    cout<<"Largest Number in the array is : "<<largeNum<<endl;

    cout<<endl<<"Done";
    
}