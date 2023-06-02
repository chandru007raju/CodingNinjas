#include<iostream>
#include<cmath>
using namespace std;
void swapElement(int input[], int i, int j)
{
    int temp = input[i];
    input[i] = input[j];
    input[j] = temp;
}

void reverse(int input[], int start, int end)
{
    int i = start, j = end;
    while (i < j)
    {
        swapElement(input, i, j);
        i++;
        j--;
    }
}

void Sortt(int arr[],int n,int d){
    if(d >= n && n!= 0){
        d= d%n;
}

    int i=0,j = n-1;
    reverse(arr,0,n-1);

    reverse(arr,0,n-d-1);
    reverse(arr,n-d,n-1);

    
}

int main(){

    int n;
    cin>>n;

    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;


    Sortt(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    // int arr1[100];
    // for(int i=0;i<n1;i++){
    //     cin>>arr1[i];
    // }


}