#include <iostream>
using namespace std;

int** input2d(int** input,int row,int col){

    input = new int *[row];
        for (int i = 0; i < row; i++)
        {
            input[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> input[i][j];
            }
        }
        return input;
}

int LargestSumCol(int** input,int row,int col){
    
    int large = INT_MIN;
    for(int j=0;j<col;j++){
        int sum = 0;
        for(int i=0;i<row;i++){
            sum = sum + input[i][j];
            
            if(sum > large){
                large = sum;
            }
            
        }
        cout<<" col "<<j+1<<" sum = "<<sum<<endl;
    }
    return large;
}
void output2d(int** input,int row,int col){
    for (int i = 0; i < row; i++)
        {            
            for (int j = 0; j < col; j++)
            {
                cout<< input[i][j]<<" ";
            }
            cout<<endl;
        }    
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int r;
        cin>>r;

        int c;
        cin>>c;

        int **input;
        input = input2d(input,r,c);
        
        cout<<"Array elements are : "<<endl;

        cout<<LargestSumCol(input,r,c)<<endl;
        
        output2d(input,r,c);

    }
}