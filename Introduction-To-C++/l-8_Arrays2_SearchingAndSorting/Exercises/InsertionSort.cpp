#include <iostream>
using namespace std;

void InsertionSort(int arr[],int s){
    
    for(int i=1;i<s;i++){
        int curr = arr[i];
        int j = i-1;

        while(arr[j] > curr && j>=0 ){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] =curr;

    }

}

int main()
{
    int arr[] = {5, 7, 4, 6, 2,8,9};

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    InsertionSort(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
