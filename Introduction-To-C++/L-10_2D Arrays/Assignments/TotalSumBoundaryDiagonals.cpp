#include <iostream>
using namespace std;
int GetFirstDiagonal(int **arr,int r){
    int sum = 0;
    int dim = r;
    int row = 0;
    int col = 0;
    while(row<dim && col <dim){
        sum += arr[row][col];
        row++;
        col++;
    }
    return sum;
}
int GetsecondDiagonal(int ** arr, int r){
    int sum = 0;
    int dim = r;
    int row = 0;
    int col = dim-1;
    while(row<dim && col>=0){
        sum += arr[row][col];
        row++;
        col--;
    }
    return sum;

}
int getBoundary(int **arr,int r){
    int sum = 0;
    for(int i=1;i<r-1;i++){
        sum += arr[0][i];
    }
    for(int i=1;i<r-1;i++){
        sum += arr[r-1][i];
    }
    for(int i=1;i<r-1;i++){
        sum += arr[i][0];
    }
    for(int i=1;i<r-1;i++){
        sum += arr[i][r-1];
    }

    return sum;

}

int TotalSum(int ** arr,int r){
    int total = GetFirstDiagonal(arr,r) + GetsecondDiagonal(arr,r) + getBoundary(arr,r);
    if(r%2 !=0){
        total = total - arr[r/2][r/2];
    }
    return total;
}


int main(){
    int r;
    cin>>r;
    
    int** arr = new int* [r];
    for(int i=0;i<r;i++){
        arr[i] = new int[r];
        for(int j=0;j<r;j++){
            cin>>arr[i][j];
        }
    }

    cout<<TotalSum(arr,r);
    cout<<endl;
    
}