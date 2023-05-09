#include <iostream>
using namespace std;

void spiralPrint(int** arr,int r,int c){
    int rows = r;
    int cols = c;

    int startRow = 0;
    int colStart = 0;

    int NumOfElements = r * c;
    int count = 0;
    int i;

while(count<NumOfElements){
        for(i=startRow;count<NumOfElements && i<cols;i++){
        cout<<arr[startRow][i]<<" ";
        count++;
        }
        startRow++;
        for(i=startRow;count<NumOfElements && i<rows;i++){
            cout<<arr[i][cols-1]<<" ";
            count++;
        }
        cols--;
        for(i=cols-1;count<NumOfElements && i >= colStart;i--){
            cout<<arr[rows-1][i]<<" ";
            count++;
        }
        rows--;
        for(i=rows-1;count<NumOfElements && i >= startRow;i--){
            cout<<arr[i][colStart]<<" ";
            count++;
        }
        colStart++;
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