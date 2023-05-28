#include<iostream>
using namespace std;

int * arrange(int arr[],int n){
    int num = 1;
    int start = 0;
    int end = n-1;
    while(start <= end){  
        arr[start] = num;
        num++;
        if(start == end){
            break;
        }else{
        arr[end] = num;
        num++;
        }

        start++;
        end--;        
    }
    return arr;
}

int* ArrangeArray(int arr[],int n){
    int num = 1;
    int start = 0;
    int end = n-1;
    for(int i=0;i<n;i++){
        if(i%2 ==0){
            arr[start] = num;
            start++;
            num++;
        }else{
            arr[end] = num;
            end--;
            num++;
        }       
        
    }
    return arr;
}

int main(){
    int n;
    cin>>n;

    // int arr[100];
    int* arr1 = new int[n];
    // arr1 = ArrangeArray(arr1,n);
    arr1 = arrange(arr1,n);
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";        
    }
}

