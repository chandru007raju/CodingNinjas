/*
Code : No. of balanced BTs
Given an integer h, find the possible number of balanced binary trees of height h. You just need to return the count of possible binary trees which are balanced.
This number can be huge, so, return output modulus 10^9 + 7.
Write a simple recursive solution.

Input Format :
The first and only line of input contains an integer, that denotes the value of h. Here, h is the height of the tree.

Output Format :
The first and only line of output contains the count of balanced binary trees modulus 10^9 + 7.

Constraints :
1 <= h <= 24

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
const long long m = 1e9 + 7;

int balancedBTs(int n) {

    if (n == 1){
        return 1;
    }
    if (n == 2){
        return 3;
    }
    int a = balancedBTs(n - 1);
    int b = balancedBTs(n - 2);
    int temp1 = (int)(((long long)(a) * a) % m);
    int temp2 = (int)((2 * (long long)(a) * b) % m);
    int ans = (int)(((long long)temp1 + temp2) % m);
    return ans;
}
/*
// Memoization Approach -->

long long int helper(int n,long long int *arr){
    if(n<=1){
        return 1;
    }
    if(arr[n]!=-1){
        return arr[n];
    }
    int divisor=pow(10,9)+7;
    long long int smallOutput = ((helper(n-1,arr)*helper(n-1,arr))%divisor) + ((helper(n-1,arr)*helper(n-2,arr))%divisor) + ((helper(n-2,arr)*helper(n-1,arr))%divisor);
	arr[n]=smallOutput%divisor;
    return arr[n];
}
long long int balancedBTs(int n){
    if(n<=1){
        return 1;
    }
    long long int *arr=new long long int[n+1];
    for(int i=0;i<=n;i++){
        arr[i]=-1;
    }
    arr[0]=1;
    arr[1]=1;
    long long int ans=helper(n,arr);
    delete [] arr;
    return ans;
}
*/

int main() {
    int n;
    cin >> n;
    cout << balancedBTs(n);
}

/*...................PRACTICE ...................*/
/*
// Brute force -->
int balancedBTs(int n){
    // base Case -->
    if(n <= 1){
        return 1;
    }

    // Recursive Call -->
    int x = balancedBTs(n-1); // find the Number of Balanced Trees for the height of its subtrees { sub tree with height 1 less than parent}
    int y = balancedBTs(n-2);

    // small answer -->
    int ans = x * x + 2*x*y;// here the integer can store a value in range (-2^31) to (2^31 - 1) so we have to typecaste this

    return ans;
}
*/

// Brute force -->
/*
int balancedBTs(int n){
    // base Case -->
    if(n <= 0){
        return 1;
    }

    // Recursive Call -->
    int mod = (int)(pow(10,7)) + 7; 

    int x = balancedBTs(n-1);
    int y = balancedBTs(n-2);

    // small answer -->
    int temp1 = (int)((long)x*x) % mod;
    int temp2 = (int)(2*(long)(x)*y) % mod;
    int ans = (temp1 + temp2) % mod;

    return ans;
}
*/

