#include <iostream>
using namespace std;

int binarySearch(int arr[],int s,int key){
    int start = 0;
    int end = s-1;

    while(start< end){
        int mid = (start + end )/2;
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            return mid; // mid index is equal to the key value to search.
        }
    }
}

int main()
{

    int size;
    cin >> size;
    int *input = new int[size];

    for (int i = 0; i < size; ++i)
    {
        cin >> input[i];
    }

    int t;
    cin >> t;

    while (t--)
    {
        int val;
        cin >> val;
        cout << binarySearch(input, size, val) << endl;
    }

    delete[] input;
    return 0;
}