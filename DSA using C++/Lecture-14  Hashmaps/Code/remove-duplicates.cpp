#include<iostream>
using namespace std;

#include<vector>
#include<unordered_map>

vector<int> removeDuplicates(int * arr,int n) // This will print the repeated elements -->
{
    vector<int>Output;
    unordered_map<int,bool> seen;

    for(int i = 0;i < n;i++)
    {
        if(seen.count(arr[i]) > 0)
        {
            continue;
        }
        else
        {
            seen[arr[i]] = true;
            Output.push_back(arr[i]);
        }
    }

    return Output;
}

int main()
{
    int n;
    cin>>n;

    int * heapArr = new int [n];
    for(int i = 0;i < n;i++ )
    {
        cin>>heapArr[i];
    }

    vector<int> arr = removeDuplicates(heapArr,n);
    for(int i = 0;i < arr.size();i++ )
    {
        cout<<arr[i];
    }

    return 0;
}