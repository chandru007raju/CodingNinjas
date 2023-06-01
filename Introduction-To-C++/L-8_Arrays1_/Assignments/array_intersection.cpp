#include<iostream>

using namespace std;

void arrayInt(int* arr1,int* arr2,int n1,int n2){
    cout<<" Intersection--> ";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
}

int main(){
    int *arr1;
    int *arr2;
    int n1,n2;
    cin>>n1;
    arr1 = new int[n1];
    int i;
    for(i =0;i<n1;i++){
        cin>>arr1[i];
    }   
    
    cin>>n2;
    arr2 = new int [n2];
    for(i =0;i<n1;i++){
        cin>>arr2[i];
    }
    arrayInt(arr1,arr2,n1,n2);
    delete [] arr1;
    delete [] arr2;

}

