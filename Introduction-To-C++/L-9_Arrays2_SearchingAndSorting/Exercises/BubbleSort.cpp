#include <iostream>
using namespace std;

void BubbleSort(int arr[],int s){ 
    int counter = 1;
    while(counter < s-1){

        for(int i=0;i<s-counter;i++){

            if(arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    
}

void bubbleSort1(int *input, int size)
{
    // Write your code here
    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (input[j] > input[j + 1])
            {
                int temp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = temp;
            }
        }
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

    BubbleSort(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}