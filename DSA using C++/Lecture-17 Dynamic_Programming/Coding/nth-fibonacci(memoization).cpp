#include <iostream>
using namespace std;

int fibo_hepler(int n, int ans[])
{
    if (n <= 1)
    {
        return n;
    }

    // Check if Output already Exists
    if (ans[n] != -1)
    {
        return ans[n];
    }

    // If it doesnt exists then calculate and save it and then return
    // Calculating
    int a = fibo_hepler(n - 1, ans);
    int b = fibo_hepler(n - 2, ans);
    // Saving
    ans[n] = a + b;
    // Returning the final Output
    return ans[n];
}

int fibo(int n)
{
    int *ans = new int[n + 1];

    for (int i = 0; i < n + 1; i++)
    { // initializing array to -1 to avoid presence of garbage -->
        ans[i] = -1;
    }

    return fibo_hepler(n, ans);
}

int main()
{
    cout << fibo(21);

    return 0;
}

// Practice -->

/*
int fibbo_1(int n){ // brute force approach Time complexity O(n^2)
    if(n <= 1){
        return n;
    }
    return fibbo_1(n-1)+fibbo_1(n-2);
}


int fibbo_2_helper(int *arr, int n) // Memoization Approach Time Complexity O(n) -->
{
    if (n <= 1)
    {
        return n;
    }
    if (arr[n] != -1)
    {
        return arr[n];
    }

    int a = fibbo_2_helper(arr,n-1);
    int b = fibbo_2_helper(arr,n-2);

    arr[n] = a+b;

    return arr[n];
}

int fibbo_2(int n)
{

    int *arr = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }
    return fibbo_2_helper(arr, n);
}
*/

