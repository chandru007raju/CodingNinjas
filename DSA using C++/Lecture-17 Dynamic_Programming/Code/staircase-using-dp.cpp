/*
Code : Staircase using Dp
A child runs up a staircase with 'n' steps and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count and return all possible ways in which the child can run-up to the stairs.

Input format :
The first and the only line of input contains an integer value, 'n', denoting the total number of steps.

Output format :
Print the total possible number of ways.

Constraints :
0 <= n <= 10 ^ 4

Time Limit: 1 sec

Sample Input 1:
4
Sample Output 1:
7

Sample Input 2:
10
Sample Output 2:
274
*/

#include <iostream>
using namespace std;

long staircase(int n)
{
    if (n <= 2)
    {
        return n;
    }

    long *dp = new long[n + 1];
    dp[0] = 0; // 0 steps = 0 ways of climbing
    dp[1] = 1; // 1 steps = 1 ways of climbing
    dp[2] = 2; // 2 steps = 2 ways of climbing
    dp[3] = 4; // 4 steps  = 4 ways of climbing the stairs -->1 step at a time --> 1 step and then 2 steps --> 2 steps and then 1 step --> 3 steps at a time -->
    for (int i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    return dp[n];
}

int main()
{
    int n;
    cin >> n;
    cout << staircase(n);
}

/*....................PRACTICE.........................*/

/*
int staircase(int n){
    if(n <= 2){
        return n;
    }

    long * dp = new long [n+1];

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i = 4; i <= n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    return dp[n];
}

*/