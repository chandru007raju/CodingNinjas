#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int fibo(int n){
    int *dp = new int [n + 1];
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main(){
    cout << fibo(21);

    return 0;
}

/*

// PRACTICE -->

// dp approach (Dynamic Programming) Time Complexity O(n) --> with space optimization-->

int fibbo_3(int n)x
{ 

    if (n <= 1)
    {
        return n;
    }

    int *ans = new int[n + 1];

    ans[0] = 0;
    ans[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        ans[i] = ans[i - 1] + ans[i - 2];
    }

    return ans[n];
}
int main()
{
    int n;
    cin >> n;

    fibbo_3(n);

    return 0;
}

*/