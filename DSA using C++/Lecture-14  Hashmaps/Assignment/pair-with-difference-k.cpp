/*
Pairs with difference K
You are given with an array of integers and an integer K. You have to find and print the count of all such pairs which have difference K.
Note: Take absolute difference between the elements of the array.

Input Format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol n.
The following line contains n space separated integers, that denote the value of the elements of the array.
The following line contains an integer, that denotes the value of K.

Output format :
The first and only line of output contains count of all such pairs which have an absolute difference of K. 

Constraints :
0 <= n <= 10^4
Time Limit: 1 sec

Sample Input 1 :
4 
5 1 2 4
3

explanation ------->
5,2
1.2 --> wrong -> thisdoes not become a difference to give ans 3;
1,4
5,2


Sample Output 1 :
2

Sample Input 2 :
4
4 4 4 4 
0
Sample Output 2 :
6
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int getPairsWithDifferenceK(int *arr, int n, int k)
{
    unordered_map<int, int> ump;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count += ump[arr[i] + k];
        if (k != 0)
        {
            count += ump[arr[i] - k];
        }
        ump[arr[i]]++;
    }
    return count;
}
int getdiff(int * a,int n, int k){

    unordered_map<int,int> map1;
    int count = 0;

    for(int i = 0; i < n;i++){

        count += map1[a[i] + k];
        if(k != 0){
            count += map1[a[i] - k];
        }
        map1[a[i]]++;
    }
    return count ;
}


int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int k;
    cin >> k;

    cout << getPairsWithDifferenceK(input, n, k)<<endl;
    cout << getdiff(input, n, k);


    delete[] input;
}

/*
// PRACTICE --->

int getPairsWithDifferenceK(int * a,int n,int k) //  -1 3 5 -2 5 6 --> 2
// 1 &  -3 ->search push (-1), 5 & 1 search push(3), 7 & 3 search push(5), 0 & -4 search push(-2)
// 7 & 3 search push(5), 8 & 4 search push(6)
// 
{
    unordered_map<int,int> mapp;
    int count = 0;
    for(int i = 0;i < n; i++){

        count += mapp[a[i] + k];
        if( k != 0){
            count += mapp[a[i] - k];
        }

        mapp[a[i]]++;
    }
}
*/

// int getdiff(int * a,int n, int k){
//     unordered_map<int,int> mapp;
//     int count = 0;

//     for(int i = 0; i < n;i++){

//         count += mapp[a[i] + k];
//         if(k != 0){
//             count += mapp[a[i] - k];
//         }
//         mapp[a[i]]++;
//     }
//     return count ;
// }