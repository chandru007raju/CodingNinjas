#include <iostream>
using namespace std;

int CheckArrayRotation(int* arr,int s){
    int count = 0;
    for (int i=0;i<s;i++){
        if(arr[i] < arr[i+1]){
            count++;
        }else{
            return count+1;
        }
    }
    return 0;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int s;
        cin>>s;

        int* arr = new int[s];
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
        cout<<CheckArrayRotation(arr,s);
        cout<<endl;
        delete[]arr;

    }
}