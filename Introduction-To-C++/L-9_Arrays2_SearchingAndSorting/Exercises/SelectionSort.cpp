#include <iostream>
using namespace std;
void selectionSort(int arr[],int s){
    for(int i=0;i<s;i++){
        int min = arr[i];
        int minindex = i;

        for(int j = i+1;j<s;j++){
            if(arr[j]< arr[i]){
                min = arr[j];
                minindex = j;
            }            
        }
        int temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;        

    }
}

int main()
{
    int arr[] = {8, 5, 7, 4, 6, 2};

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    selectionSort(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}