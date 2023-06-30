#include <iostream>
#include <unordered_map>
using namespace std;

void printIntersection(int arr1[], int arr2[], int n, int m)
{
    unordered_map<int, int> intersection;
    for (int i = 0; i < m; i++)
    {
        intersection[arr2[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (intersection[arr1[i]] > 0)
        {
            cout << arr1[i] << endl;
            intersection[arr1[i]]--;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    int *arr1 = new int[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int *arr2 = new int[m];

    for (int i = 0; i < m; ++i)
    {
        cin >> arr2[i];
    }

    printIntersection(arr1, arr2, n, m);

    delete[] arr1;
    delete[] arr2;
}

/*
//    PRACTICE ------->

#include<iostream>

using namespace std;
#include<unordered_map>
#include<vector>

vector<int> Arrayintersection(int* arr1,int *arr2,int n,int m)
{
    vector<int>arr;
    unordered_map <int,int> ump;
    for(int i=0;i<n;i++){
        ump[arr1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        if(ump[arr2[i]] > 0){
            arr.push_back(arr2[i]);
            ump[arr2[i]]--;
        }
    }
    return arr;

}

int main()
{
    int n,m;
    cin>>m>>n;

    int *arr1 = new int[n];
    int *arr2  = new int[m];

    for(int i=0; i<n;i++)
    {
        cin>>arr1[i];
    }

    for(int i=0; i<m;i++)
    {
        cin>>arr2[i];
    }

    vector<int> arr = Arrayintersection(arr1,arr2,n,m);
    for(int i=0;i< arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
*/