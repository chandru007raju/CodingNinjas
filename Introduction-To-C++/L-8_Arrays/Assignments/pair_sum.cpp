#include <iostream>
using namespace std;
int pairSum(int arr[],int s,int x){
    int pair = 0;
    
    for(int i=0;i<s;i++){
        for(int j=i+1;j<s;j++){
            if(arr[i]+arr[j] == x){
                pair++;
            }
        }
    }
    return pair;
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
        
        int ans = pairSum(arr,size,x);
        cout<<" Pair Sum is : "<<ans<<endl;
        delete [] arr;
    }
}