#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row = 1;
    int count = n;
    while(row <= n){

        int col = 1;
        while(col <= count){
            cout<<col;
            col++;
        }

        int stars = 1;
        while(stars <= row-1){
            cout<<"*";
            stars++;
        }

        int star2 = 1;
        while(star2 <= row-1){
            cout<<"*";
            star2++;
        }

        int j = 1;
        int start = count;
        while(j <= count){
            cout<<start;
            start--;
            j++;
        }

        cout<<endl;
        row++;
        count--;
    }
}

// ***************BOTH ARE Same ************************


// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int row = 1;
//     while(row <= n){

//         int col = 1;
//         int count = n;
//         while(col <= n-row +1){
//             cout<<col;
//             col++;
//         }

//         int star = 1;
//         while(star <= row-1){
//             cout<<"*";
//             star++;
//         }

//         int str2 = 1;
//         while(str2 <= row-1){
//             cout<<"*";
//             str2++;
//         }

//         int col2 = 1;
//         int val = n-row+1;
//         while(col2 <= n-row +1){
//             cout<<val;
//             val--;
//             col2++;
//         }

        

//         row++;
//         cout<<endl;
//     }
// }
