/*
Code : Maximum Frequency Number
You are given an array of integers that contain numbers in random order. Write a program to find and return the number which occurs the maximum times in the given input.
If two or more elements contend for the maximum frequency, return the element which occurs in the array first.

Input Format:
The first line of input contains an integer, that denotes the value of the size of the array. Let us denote it with the symbol N.
The following line contains N space separated integers, that denote the value of the elements of the array.

Output Format :
The first and only line of output contains most frequent element in the given array.

Constraints:
0 <= N <= 10^8

Time Limit: 1 sec

Sample Input 1 :
13
2 12 2 11 12 2 1 2 2 11 12 2 6 
Sample Output 1 :
2

Sample Input 2 :
3
1 4 5
Sample Output 2 :
1
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int highestFrequency(int arr[], int n) {
    int max = 0, maxElement = 0;
    unordered_map<int, int> ump;
    for (int i = 0; i < n; i++){
            ump[arr[i]]++;
        if (ump[arr[i]] > max){
            max = ump[arr[i]];
        }
    }
    
    for (int i = 0; i < n; i++){
        if (ump[arr[i]] == max){
            maxElement = arr[i];
            break;
        }
    }
    return maxElement;
}

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << highestFrequency(arr, n);

    delete[] arr;
}

/*
// Practice ---->
int highestFrequency(int *arr,int n)
{
    int maxfreq = 0, maxelement = 0;
    unordered_map<int,int> ump;
    for(int i = 0;i < n;i++)
    {
        ump[arr[i]]++;
        if(maxfreq < ump[arr[i]]){
            maxfreq = ump[arr[i]];
            maxelement = arr[i];
        }
    }

    return maxelement;
}
*/

/*    
// PRACTICE  ---> ---->   PLEASE CHECK OUT THIS 

#include<iostream>
using namespace std;
#include<unordered_map>

int main()
{
    unordered_map <int,int> a;
    int arr[6] = {1,2,3,4,5,5};
    for(int i=0;i<6;i++){
        // arr[i] += 2;
        a[arr[i]] += 1; // Similar to operation on arrays accesssing and updating element using index,,, here accessing the value using key and updating the value

    }

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
        cout<<a.at(arr[i]);
        //  OR
        // cout<<a[arr[i]];
        cout<<endl;
    }
}

*/
