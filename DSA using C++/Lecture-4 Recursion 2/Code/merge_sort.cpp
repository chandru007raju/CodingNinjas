#include<iostream>
using namespace std;

void mergeArr(int a[],int start,int end,int mid){

    int i = start;
    int j = mid+1;
    int k = 0;
    int * newArr = new int [end - start +1];
    while(i <= mid && j<= end){

        if(a[i] <= a[j]){
            newArr[k++] = a[i++];
        }else{
            newArr[k++] = a[j++];
        }
    }
    while( i<= mid){
            newArr[k++] = a[i++];
    }
    while( j<= end){
            newArr[k++] = a[j++];
    }
    
    for(int l=0;l< k;l++){
        a[start++] = newArr[l];
    }

}

void mergeHelper(int a[],int start,int end){
    
    if(start >= end){
        return;
    }
    int mid = (start + end )/ 2;
    mergeHelper(a,start,mid);
    mergeHelper(a,mid+1,end);

    mergeArr(a,start,end,mid);

}

void merge(int a[],int n){

    mergeHelper(a,0,n-1);
}

int main(){
    int n;
    cin>>n;

    int * a = new int [n];

    for(int i=0;i<n;i++){
        cin>>a[i];

    }

    merge(a,n);

    for(int j=0;j<n;j++){
        cout<<a[j]<<" ";
    }
}