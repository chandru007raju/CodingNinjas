#include <iostream>
using namespace std;

void WavePrint(int **arr,int r,int c){
    int row = r;
    int col = c;
    for(int j=0;j<col;j++){
        if( j %2 ==0)
        {
            for(int i = 0;i<row;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            for(int i= row-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
            }
        }    
        
    }
    
}
// ANOTHER WAY OF SOLVING THIS PROBLEM -->

void Waveprint1(int ** arr,int r,int c){
    int row = r;
    int col = c;
    bool upToDown = true;
    for(int j=0;j<col;j++){
        if(upToDown)
        {
            for(int i = 0;i<row;i++){
                cout<<arr[i][j]<<" ";
            }
            upToDown = false;
        }
        else
        {
            for(int i= row-1;i>=0;i--){
            cout<<arr[i][j]<<" ";
            }
            upToDown = true;
        }    
        
    }

}


int main(){
    int r;
    cin>>r;
    int c;
    cin>>c;

    int** arr = new int* [r];
    for(int i=0;i<r;i++){
        arr[i] = new int[c];
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    WavePrint(arr,r,c);
    // Waveprint1(arr,r,c);
    cout<<endl; 

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;       
    }
    
}