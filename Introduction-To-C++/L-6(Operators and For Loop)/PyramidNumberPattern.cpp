#include <iostream>
using namespace std;

int main (){
    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
        int space = 1;
        while(space <= n-row){
            cout<<" ";
            space++;
        }

        int num = row;
        int col = 1;
        while(col <= row){
            cout<<num;
            num--;
            col++;
        }

        int decrease = 1;
        int val = 2;
        while(decrease <= row-1){
            cout<<val;
            val++;
            decrease++;

        }

        

        cout<<endl;
        row++;
    }
}