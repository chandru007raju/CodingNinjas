#include <iostream>
using namespace std;

void pushZeroesEnd(int *input, int size)
{
    int i=0,j=0;
    while(i < size){
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        if(input[j] != 0){
            j++;
        }
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int size;

        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        pushZeroesEnd(input, size);

        for (int i = 0; i < size; i++)
        {
            cout << input[i] << " ";
        }

        cout << endl;
        delete[] input;
    }

    return 0;
}