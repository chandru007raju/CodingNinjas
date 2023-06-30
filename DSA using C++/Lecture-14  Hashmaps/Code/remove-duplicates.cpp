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
