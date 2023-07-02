/*
Longest subset zero sum
Given an array consisting of positive and negative integers, find the length of the longest subarray whose sum is zero.

Input Format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol N.
The following line contains N space separated integers, that denote the value of the elements of the array.

Output Format
The first and only line of output contains length of the longest subarray whose sum is zero.

Constraints:
0 <= N <= 10^8
Time Limit: 1 sec

Sample Input 1:
10 
95 -97 -387 -435 -5 -70 897 127 23 284
Sample Output 1:
5
Explanation:
The five elements that form the longest subarray that sum up to zero are: -387, -435, -5, -70, 897 
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubsetWithZeroSum(int *arr, int n)
{
    unordered_map<int, int> ump;
    int sum = 0, maxCount = 0;
    ump[0] = -1; // meaning sum is zero for the index -1
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (ump.count(sum) > 0)
        {
            maxCount = max(maxCount, i - ump[sum]);
        }
        else
        {
            ump[sum] = i;
        }
    }
    return maxCount;
}

int subset1(int * a,int n){ // 2 3 4 0 -4 2 3 --> 2,5 9,9, 5
// 6 3 -1 2  -4 3 1 -2 20
    unordered_map<int,int> mapp;
    int maxcount = 0;
    int numindex;
    int sum = 0;
    mapp[0] = -1; // meaning sum is zero for the index -1
    for(int i = 0;i< n;i++){
        int count = 0;
        sum += a[i];
        if(mapp.count(sum) > 0){
            numindex = mapp[sum];
            count = i - numindex;
            if(count > maxcount){
                maxcount = count;
            }
        }
        else{
            mapp[sum] = i;
        }
    }
    return maxcount;
}

int main()
{
    int size;
    cin >> size;

    int *arr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << lengthOfLongestSubsetWithZeroSum(arr, size)<<endl;
    cout << subset1(arr, size);


    delete[] arr;
}

int subset(int * a,int n){ // 2 3 4 0 -4 2 3 --> 2,5 9,9, 5
// 6 3 -1 2  -4 3 1 -2 20
    unordered_map<int,int> mapp;
    int maxcount = 0;
    int numindex;
    int sum = 0;
    for(int i = 0;i< n;i++){
        int count = 0;
        sum += a[i];
        if(mapp[sum]){
            numindex = mapp[sum];
            count = i - numindex;
            if(count > maxcount){
                maxcount = count;
            }
        }
        mapp[sum] = i;
    }
}

/*
// PARCTICE ----->

int subset1(int * a,int n){ // 2 3 4 0 -4 2 3 --> 2,5 9,9, 5
// 6 3 -1 2  -4 3 1 -2 20
    unordered_map<int,int> mapp;
    int maxcount = 0;
    int numindex;
    int sum = 0;
    mapp[0] = -1; // meaning sum is zero for the index -1
    for(int i = 0;i< n;i++){
        int count = 0;
        sum += a[i];
        if(mapp.count(sum) > 0){
            numindex = mapp[sum];
            count = i - numindex;
            if(count > maxcount){
                maxcount = count;
            }
        }
        else{
            mapp[sum] = i;
        }
    }
    return maxcount;
}

*/