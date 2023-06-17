#include<iostream>
using namespace std;

int  binaryHelper(int input[],int start,int end,int key){

    if(start> end)
        return -1;
    int mid = (start + end )/2;
    if(input[mid] == key)
        return mid;
    if(key < input[mid])
        return binaryHelper(input,start,mid-1,key);
    if(key > input[mid])
        return binaryHelper(input,mid+1,end,key);
}

int binarySearch(int input[],int size,int key){
    
    return binaryHelper(input,0,size-1,key);
}

int main(){
    int input[1000],key,len,ans;

    cin>>len>>key;
    for(int i=0;i<len;i++){
        cin>>input[i];
    }

    ans = binarySearch(input,len,key);
    cout<<ans;

    return 0;
}