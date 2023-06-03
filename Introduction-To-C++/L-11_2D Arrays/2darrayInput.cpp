#include<iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;

    // CREATING POINTER TO 2D ARRAY --> DYNAMIC MEMORY ALLOCATION
    int** arr  =new int* [row];

    // CREATING 2D ARRAY
    for(int i=0;i<row;i++){
        arr[i]  = new int [col];
    }

    // INPUT 2D ARRAY
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    // OUTPUT 2D ARRAY -->
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j];
        }
        delete arr[i];
        cout<<endl;
    }
    delete[] arr;

}