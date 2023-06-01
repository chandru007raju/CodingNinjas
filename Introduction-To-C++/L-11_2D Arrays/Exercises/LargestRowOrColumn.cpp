#include<iostream>
using namespace std;

void largestRowOrCol(int ** arr,int r,int c){
    int large = INT_MIN;
    bool isRow = true;
    int index=0;
    if(r == 0){
        cout<<" row "<<index<<" "<<large<<endl;
        return;
    }
    // To Check Row Largest
    for(int i=0;i<r;i++){
        int rsum = 0;
        for(int j=0;j<c;j++){
            rsum = rsum + arr[i][j];            
        }
            if(rsum > large){
                large = rsum;
                index = i;
        }
    }
    // To Check Col Largest
    for(int j=0;j<c;j++){
        int csum = 0;
        for(int i=0;i<r;i++){
            csum = csum + arr[i][j];            
        }
        if(csum > large){
                large = csum;
                isRow = false;
                index = j;
            }
    }
    if(isRow){
        cout<<"Row : "<< index<<" LargeSum: "<<large<<endl;
    }else{
        cout<<"Col : "<< index<<" LargeSum: "<<large<<endl;
    }
}

int main(){
    int r;
    cin>>r;

    int c;
    cin>>c;

    int** arr = new int*[r];
    for(int i=0;i<r;i++){
        arr[i] = new int [c];
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    largestRowOrCol(arr,r,c);
}