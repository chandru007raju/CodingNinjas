#include <iostream>
using namespace std;

void spiralPrint(int** arr,int r,int c){
    int row = r;
    int col = c;
    int startRow = 0;
    int colstart = 0;
    int i;
    int count = 0;

    int num = r*c;
    while(count < num){
        for(i = startRow;count < num && i<col;i++){
            cout<<arr[startRow][i]<<" ";
            count++;
        }
        startRow++;
        for(i=startRow;count < num && i<row;i++){
            cout<<arr[i][col-1]<<" ";
            count++;
        }
        col--;
        for(i=col-1;count< num && i>=colstart;i--){
            cout<<arr[row-1][i]<<" ";
            count++;
        }
        row--;
        for(i=row-1;count < num && i>= startRow;i--){
            cout<<arr[i][colstart]<<" ";
            count++;
        }
        colstart++;
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

    spiralPrint(arr,r,c); 
    cout<<endl; 

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;       
    }
    
}