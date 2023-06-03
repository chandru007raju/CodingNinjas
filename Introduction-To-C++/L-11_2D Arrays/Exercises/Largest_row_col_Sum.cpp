#include<iostream>
using namespace std;

void colSum(int** arr,int row,int col){
    int large = INT_MIN;
    bool isRow = true;
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j =0;j<col;j++) {
            sum += arr[i][j];
        }
        if(sum>large){
            large = sum;
        }
        cout<<i<<"th row sum is ->"<<sum<<endl;
    } 

    for(int i=0;i<col;i++){
            int sum = 0;
            for(int j =0;j<row;j++) {
                sum += arr[j][i];
            }
            if(sum > large){
                isRow = false;
                large = sum;
            }
            cout<<i<<"th col sum is ->"<<sum<<endl;
    }
    if(isRow){
        cout<<"Row Sum is Large"<<endl;
    }else{
        cout<<" col Sum is large"<<endl;
    }
}
   
   
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

    colSum(arr,row,col);

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