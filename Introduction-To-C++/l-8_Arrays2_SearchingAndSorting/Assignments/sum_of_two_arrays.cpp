
// WATCH VEDIO IF YOU DON'T GET IT RIGHT
// https://www.youtube.com/watch?v=KFJ-3ei5uLA


#include <iostream>
using namespace std;

// #include "solution.h"

void sumOfTwoArrays(int *input1, int size1, int *input2, int size2, int *output)
{
    // Write your code here
    int maxIndex = size1;
    if (size1 < size2)
    {
        maxIndex = size2;
    }

    int i = size1 - 1;
    int j = size2 - 1;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int sum = input1[i--] + input2[j--] + carry;
        output[maxIndex--] = sum % 10;
        carry = sum / 10;

        //OR

        // int sum = input1[i] + input2[j] + carry;
        // i--;
        // j--;
        // output[maxIndex] = sum % 10;
        // maxIndex--;
        // carry = sum / 10;
    }

    while (i >= 0)
    {
        int sum = input1[i--] + carry;
        output[maxIndex--] = sum % 10;
        carry = sum / 10;
    }

    while (j >= 0)
    {
        int sum = input2[j--] + carry;
        output[maxIndex--] = sum % 10;
        carry = sum / 10;
    }

    while (maxIndex >= 0)
    {
        output[maxIndex--] = carry;
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

        int *input1 = new int[size1];

        for (int i = 0; i < size1; ++i)
        {
            cin >> input1[i];
        }

        int size2;
        cin >> size2;

        int *input2 = new int[size2];

        for (int i = 0; i < size2; ++i)
        {
            cin >> input2[i];
        }

        int outsize = 1 + max(size1, size2);

        int *output = new int[outsize];

        sumOfTwoArrays(input1, size1, input2, size2, output);

        for (int i = 0; i < outsize; ++i)
        {
            cout << output[i] << " ";
        }

        delete[] input1;
        delete[] input2;
        delete[] output;
        cout << endl;
    }

    return 0;
}