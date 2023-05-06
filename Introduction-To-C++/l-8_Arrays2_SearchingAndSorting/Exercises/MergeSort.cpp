
// Sample Input 2 :
//     1
//     3
//     10 100 500
//     7
//     4 7 9 25 30 300 450
//     4


// Sample Output 2 :
//     4 7 9 10 25 30 100 300 450 500

#include <iostream>
using namespace std;

// #include "solution.h"

void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    // Write your code here
    int i = 0, j = 0, k = 0;
    while (j < size1 && k < size2)
    {
        if (arr1[j] == arr2[k])
        {
            ans[i++] = arr1[j++];
            ans[i++] = arr2[k++];
        }
        else if (arr1[j] < arr2[k])
        {
            ans[i++] = arr1[j++];
        }
        else
        {
            ans[i++] = arr2[k++];
        }
    }

    // Sorting remaining elements of first array
    while (j < size1)
    {
        ans[i++] = arr1[j++];
    }

    // Sorting remaining elements of second array
    while (k < size2)
    {
        ans[i++] = arr2[k++];
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size1;
        cin >> size1;

        int *arr1 = new int[size1];

        for (int i = 0; i < size1; i++)
        {
            cin >> arr1[i];
        }

        int size2;
        cin >> size2;

        int *arr2 = new int[size2];

        for (int i = 0; i < size2; i++)
        {
            cin >> arr2[i];
        }

        int *ans = new int[size1 + size2];

        merge(arr1, size1, arr2, size2, ans);

        for (int i = 0; i < size1 + size2; i++)
        {
            cout << ans[i] << " ";
        }

        cout << endl;
        delete[] arr1;
        delete[] arr2;
        delete[] ans;
    }
}