#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
        int spaces = 1;
        while(spaces <= n-row){
            cout<<" ";
            spaces++;
        }
        int col = 1;
        int val = row;
        while(col <= row){
            cout<<val;
            val++;
            col++;
        }
        int dec = 2*row -2;
        while(dec > row-1){
            cout<<dec;
            dec--;
        }

        row++;
        cout<<endl;
    }
}