#include <iostream>
using namespace std;

void sortZerosAndOnes(int* arr,int s){
    int i=0;
    int j =s-1;

    while(i<j){
        if(arr[i] == 0){
            i++;
        }
        if(arr[j] == 1){
            j--;
        }
        if(arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] =arr[j];
            arr[j] = temp;
        }
    }
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int s;
        cin>>s;

        int *arr = new int[s];
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
        sortZerosAndOnes(arr,s);

        for(int i=0;i<s;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        delete[]arr;
    }
}