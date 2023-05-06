
// WATCH VEDIO IF YOU DON'T GET IT RIGHT
// URL = https://www.youtube.com/watch?v=2h1dS1Sfyt0

//given an array rotate it left by d times.
//input {2, 6, 3, 1, 5}
//output after rotations by 2 times {3, 1, 5 ,1, 2, 6}

#include <iostream>
using namespace std;

int* RotateArray(int arr[],int s,int d){
    int j=1;
        while(j<=d){
            int temp = arr[0];
            int i;
            for(i=0;i<s-1;i++){
                arr[i] = arr[i+1];
            }
        //    arr[s-1]=arr[i];
        //   OR
            arr[i-1]=arr[i]; // this OR
            arr[i]= temp;
            j++;
        }
    return arr;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int s;
        cin>>s;

        int* arr = new int [s];
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
        int d;
        cin>>d;

        int* ans=RotateArray(arr,s,d);
        for(int i=0;i<s;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        delete[]arr;
    }
}