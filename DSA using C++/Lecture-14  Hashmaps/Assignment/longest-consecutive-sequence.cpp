/*
Longest Consecutive Sequence
Send Feedback
You are given an array of unique integers that contain numbers in random order. You have to find the longest possible sequence of consecutive numbers using the numbers from given array.
You need to return the output array which contains starting and ending element. If the length of the longest possible sequence is one, then the output array must contain only single element.
Note:
1. Best solution takes O(n) time.
2. If two sequences are of equal length, then return the sequence starting with the number whose occurrence is earlier in the array.
Input format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol n.
The following line contains n space separated integers, that denote the value of the elements of the array.
Output format:
The first and only line of output contains starting and ending element of the longest consecutive sequence. If the length of longest consecutive sequence, then just print the starting element.
Constraints :
0 <= n <= 10^6
Time Limit: 1 sec
Sample Input 1 :
13
2 12 9 16 10 5 3 20 25 11 1 8 6 
Sample Output 1 :
8 12 
Sample Input 2 :
7
3 7 2 1 9 8 41
Sample Output 2 :
7 9
Explanation: Sequence should be of consecutive numbers. Here we have 2 sequences with same length i.e. [1, 2, 3] and [7, 8, 9], but we should select [7, 8, 9] because the starting point of [7, 8, 9] comes first in input array and therefore, the output will be 7 9, as we have to print starting and ending element of the longest consecutive sequence.
Sample Input 3 :
7
15 24 23 12 19 11 16
Sample Output 3 :
15 16
*/
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> consecutive(int * a,int n){

    unordered_map<int,bool> map;
    unordered_map<int,int> index;
    int maxcount = 0;
    int end,start;

    for(int i = 0; i < n; i++){
        map[a[i]] = true;
        if(index.count(a[i]) == 0){
            index[a[i]] = i;
        }
    }

    for(int i = 0; i < n; i++){

        int count = 1;
        int startT = a[i];
        int endT = a[i];
        
        if(map[a[i]] == 1){
            while(map[endT + 1]){
                count++;
                map[++endT] = false; // that is equal to a[i]++ but this is still not updatad  it takes time so we pre-incremented here
            }
            while(map[startT - 1]){
                count++;
                map[--startT] = false;
            }
            if(count > maxcount){
                start = startT;
                end = endT;
                maxcount = count;
            }
            else if(count == maxcount){
                if(index[startT] > index[start]){
                    start = startT;
                    end = endT;
                    maxcount = count;
                }
            }
        }
    }
    vector<int>ans;
    ans.push_back(start);
    if(maxcount > 1){
        ans.push_back(end);
    }
    return ans;
}

int main(){
    int N;
    cin>> N;

    int * a = new int [N];
    for(int i=0;i< N;i++){
        cin>>a[i];
    }
    vector <int> arr = consecutive(a,N);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}

// PRACTICE  --->  

// vector<int> consecutive(int * a,int n) // 2 3 4
// {
//     unordered_map<int,bool> mapp;
//     unordered_map<int,int> index;
//     int start,end,maxcount = 0;

//     for(int i = 0;i < n; i++){
//         mapp[a[i]] = true;
//         if(index.count(a[i]) == 0){
//             index[a[i]] = i;
//         }
//     }

//     for(int i = 0; i < n;i++){

//         int startT = a[i], endT = a[i];
//         int count = 1;
//         if(mapp[a[i]]){ // if this returns true or One

//             while(mapp[endT + 1]){ // if there is an increment of a[i] present in the map
//                 count++;
//                 mapp[++endT] = false;
//             }
//             while(mapp[startT - 1]){
//                 count++;
//                 mapp[--startT] = false;
//             }
//             if(count > maxcount){
//                 start = startT;
//                 end = endT;
//                 maxcount = count;
//             }
//             if(count == maxcount){
//                 if(index[startT] < index[start]){
//                     start = startT;
//                     end = endT;
//                     maxcount = count;
//                 }
//             }            
//         }
//     }
//     vector<int> ans;
//     ans.push_back(start);
//     if(maxcount > 1){
//         ans.push_back(end);
//     }
//     return ans;
// }


