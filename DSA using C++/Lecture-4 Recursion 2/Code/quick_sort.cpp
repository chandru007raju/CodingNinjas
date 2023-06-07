
#include <iostream>
#include<time.h>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//Two passes
int partition(int input[], int start, int end)
{
    int smaller = 0;
    for(int i = start +1;i<= end;i++){
        if(input[start] >= input[i]){
            smaller++;
        }        
    }
    swap(input[start],input[start + smaller]);
    int i = start,j = end;
    while(i< start + smaller && j > start + smaller ){
        while(input[i] < input[start + smaller]){
            i++;
        }
        while(input[j] > input[start + smaller]){
            j++;
        }
        if(i< start + smaller && j > start + smaller ){
            swap(input[i],input[j]);
            i++;
            j--;
        }
    }
    return start + smaller;   
}


void quickSortHelper(int input[], int start, int end)
{
     if (start >= end)
        return;

    int c = partition(input, start, end);

    quickSortHelper(input, start, c - 1);
    quickSortHelper(input, c + 1, end);
}

//Time: - O(nlogn) Space: - O(logn)
void quickSort(int input[], int size)
{
    quickSortHelper(input, 0, size - 1);
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    quickSort(input, n);
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }

    delete[] input;
}
