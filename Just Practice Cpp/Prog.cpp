#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int helper(int *Wi, int *Vi, int N, int **arr, int MaxWi)
{ // Let Me try Out memoization -->

    // Base Case -->
    if (N == 0 || MaxWi == 0)
    {
        return 0;
    }
    if(arr[])

    // Recursive call -->
    if (MaxWi < Wi[0])
    {
        return helper(Wi + 1, Vi + 1, N - 1, arr, MaxWi);
    }

    int a = helper(Wi + 1, Vi + 1, N - 1, arr, MaxWi);         // Wen u will not select the first item -->
    int b = helper(Wi + 1, Vi + 1, N - 1, arr, MaxWi - Vi[0]); // Wen u select the firdt item -->

    // Small Calculation -->
    return max(a, b);
}

int KnapSack(int *Wi, int *Vi, int N, int MaxWi)
{

    int **arr = new int *[N + 1];
    for (int i = 0; i <= N; i++)
    {
        arr[i] = new int [N + 1];
        for (int j = 0; j < N; j++)
        {
            arr[i][j] = -1;
        }
    }

    helper(Wi, Vi, N, MaxWi);
}

int main()
{
    int N;
    cin >> N;

    int *Wi = new int[N];
    int *Vi = new int[N];
    int MaxWi;

    for (int i = 0; i < N; i++)
    {
        cin >> Wi[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin >> Vi[i];
    }

    cin >> MaxWi;

    cout << KnapSack(Wi, Vi, N, MaxWi);

    return 0;
}