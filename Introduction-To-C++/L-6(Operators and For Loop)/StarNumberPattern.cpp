#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row <= n){

        int col = 1;
        int count = n;
        while(col <= n-row +1){
            cout<<col;
            col++;
        }

        int star = 1;
        while(star <= row-1){
            cout<<"*";
            star++;
        }

        int str2 = 1;
        while(str2 <= row-1){
            cout<<"*";
            str2++;
        }

        int col2 = 1;
        int val = n-row+1;
        while(col2 <= n-row +1){
            cout<<val;
            val--;
            col2++;
        }

        

        row++;
        cout<<endl;
    }
}
