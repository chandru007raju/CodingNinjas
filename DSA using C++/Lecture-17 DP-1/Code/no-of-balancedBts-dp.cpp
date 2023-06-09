/*
Code : No. of balanced BTs using DP
Given an integer h, find the possible number of balanced binary trees of height h. You just need to return the count of possible binary trees which are balanced.
This number can be huge, so, return output modulus 10^9 + 7.
Time complexity should be O(h).

Input Format :
The first and only line of input contains an integer, that denotes the value of h. Here, h is the height of the tree.

Output Format :
The first and only line of output contains the count of balanced binary trees modulus 10^9 + 7.

Constraints :
1 <= h <= 10^6
Time Limit: 1 sec

Sample Input 1:
3
Sample Output 1:
15

Sample Input 2:
4
Sample Output 2:
315
*/

#include <iostream>
using namespace std;
const int m = 1e9 + 7;

int balancedBTs(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 3;
    }

    int *dp = new int[n + 1];
    dp[1] = 1;
    dp[2] = 3;

    for (int i = 3; i <= n; i++)
    {
        int x = (int)(((long long)dp[i - 1] * dp[i - 1]) % m);
        int y = (int)((2 * (long long)dp[i - 1] * dp[i - 2]) % m);
        dp[i] = (int)(((long long)x + y) % m);
    }
    int result = dp[n];
    delete[] dp;
    return result;
}

int main()
{
    int n;
    cin >> n;
    cout << balancedBTs(n);
}

/*.................................................................*/
/*
// Brute Force -->

int balancedBTs(int n)
{
    // base case
    if (n <= 1)
    {
        return 1;
    }

    // recursive call
    int a = balancedBTs(n - 1);
    int b = balancedBTs(n - 2);

    // small calculation
    int ans = a * a + a * b + b * a;

    return ans;
}

// memoization -->

int helper(int *arr, int n)
{

    // Base Case -->
    if (n <= 1)
    {
        return 1;
    }

    if (arr[n] != -1)
    {
        return arr[n];
    }

    int mod = pow(10, 9) + 7;
    int x = helper(arr, n - 1);
    int y = helper(arr, n - 2);

    int temp1 = ((int)(long)(x)*x) % mod;
    int temp2 = ((int)2 * (long)(x)*y) % mod;
    int smallans = (temp1 + temp2) % mod;

    arr[n] = smallans;
    return arr[n];
}

int balancedBTs(int n)
{

    int *arr = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        arr[i] = -1;
    }
    int answer = helper(arr, n);
    delete[] arr;
    return answer;
}
*/

/*.....................................................................*/

/*
// Dynamic Programming -->
int balancedBts(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 3;
    }

    int *dp = new int[n + 1];
    dp[1] = 1;
    dp[2] = 3;

    for (int i = 3; i <= n; i++)
    {

        int mod = pow(10, 9) + 7;
        int x = dp[i - 1];
        int y = dp[i - 2];

        int temp1 = (int)(long(x) * x) % mod;
        int temp2 = (int)(2 * (long)(x)*y) % mod;
        int ans = (temp1 + temp2) % mod;

        dp[i] = ans;
    }
    
    int result = dp[n];
    delete[]dp;
    return result;
}
*/
