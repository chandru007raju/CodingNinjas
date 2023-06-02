#include<iostream>
#include<cmath>
using namespace std;
void SumOfTwoArray(int arr1[],int n1,int arr2[],int n2,int arr3[],int s){
    int i = n1-1;
    int j = n2-1;
    int k = s-1;
    int carry = 0;
    int sum;
    while(i >= 0 && j>= 0){
        sum  = arr1[i--] + arr2[j--] + carry;
        arr3[k--]= sum %10;
        carry = sum/10;
    }
    while(i >= 0 ){
        sum  = arr1[i--] +carry;
        arr3[k--] = sum %10;
        carry = sum/10;
    }
    while(j>= 0){
        sum  =  arr2[j--] + carry;
        arr3[k--] = sum %10;
        carry = sum/10;
    }
    while(k >=0){
        arr3[k--] = carry;
    }

}

int main(){
    int n1,n2;
    cin>>n1>>n2;

    int arr1[100],arr2[100];

    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }

    int s = n1+1;
    if(n2 >= n1){
        s = n2+1;
    }
    int arr3[s];
    SumOfTwoArray(arr1,n1,arr2,n2,arr3,s);
    for(int i=0;i<s;i++){
        cout<<arr3[i]<<" ";
    }


}