#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    while(row <= n){
        int spaces = 1;
        int col = 1;
        while(spaces <= n-row){
            cout<<" ";
            spaces++;
        }
        int val = 1;
        while(col <= row){
            cout<<val;
            val++;
            col++;
        }
        int decrease = row-1;
        while(decrease >= 1){
            cout<<decrease;
            decrease--;
        }

        row++;
        cout<<endl;
    }
}