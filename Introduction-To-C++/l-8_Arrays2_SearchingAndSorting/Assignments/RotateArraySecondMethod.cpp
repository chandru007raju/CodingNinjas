//given an array rotate it left by d times.
//input {2, 6, 3, 1, 5}-> 1st {5,1,3,6,2}--> 2nd{3,1,5,6,2}-->3rd{3,1,5,2,6}
//output after rotations by 2 times {3, 1, 5, 2, 6}

#include <iostream>
using namespace std;

// #include "solution.h"

void swapElement(int input[], int i, int j)
{
    int temp = input[i];
    input[i] = input[j];
    input[j] = temp;
}

void reverse(int input[], int start, int end)
{
    int i = start, j = end;
    while (i < j)
    {
        swapElement(input, i, j);
        i++;
        j--;
    }
}

void rotate(int *input, int d, int n){
    if(n<=d && n!=0){
        d = d%n;
    }
    else if(n==0){
        return;
    }

    reverse(input,0,n-1);
    reverse(input,0,n-d-1);
    reverse(input,n-d,n-1);
}
// {
//     // Write your code here
//     if (d >= n && n != 0)
//     {
//         d = d % n;
//     }
//     else if (n == 0)
//     {
//         return;
//     }

//     reverse(input, 0, n - 1);
//     reverse(input, 0, n - d - 1);
//     reverse(input, n - d, n - 1);
// }


// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int size;
//         cin >> size;

//         int *input = new int[size];

//         for (int i = 0; i < size; ++i)
//         {
//             cin >> input[i];
//         }

//         int d;
//         cin >> d;

//         rotate(input, d, size);

//         for (int i = 0; i < size; ++i)
//         {
//             cout << input[i] << " ";
//         }

//         delete[] input;
//         cout << endl;
//     }

//     return 0;
// }
int main(){
    int t;
    cin>>t;

    while(t--){
        int s;
        cin>>s;

        int *arr = new int[s];
        for(int i=0;i<s;i++){
            cin>>arr[i];
        }
        int d;
        cin>>d;
        rotate(arr,d,s);

        for(int i=0;i<s;i++){
            cout<<arr[i]<<" ";
        }
        delete[]arr;
        cout<<endl;
    }
    
    return 0;
}