#include <iostream>
using namespace std;
int tripletSum(int arr[],int s,int x){
    int triplet = 0;
    
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            for(int k=j+1;k<s;k++){
                if(arr[i]+arr[j]+arr[k]== x){
                triplet++;
            }
            }
        }
    }
    return triplet;
}

int main (){
    int t;
    cin>>t;

    while(t--){
        int size;
        cin>>size;
        
        int* arr = new int[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        int x;
        cin>>x;
        
        int ans = tripletSum(arr,size,x);
        cout<<" # of triplet Sum : "<<ans<<endl;
        delete [] arr;
    }
}