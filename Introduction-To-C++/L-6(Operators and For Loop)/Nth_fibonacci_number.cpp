// Problem Description:- Nth Fibonacci Number

/*
Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2),
    Where, F(1) = F(2) = 1
Provided N you have to find out the Nth Fibonacci Number.

Input Format :
    The first line of each test case contains a real number ‘N’.

Output Format :
    For each test case, return its equivalent Fibonacci number.
Constraints:
    1 <= N <= 10000
    Where ‘N’ represents the number for which we have to find its equivalent Fibonacci number.
    Time Limit: 1 second

Sample Input 1:
    6
Sample Output 1:
    8
Explanation of Sample Input 1:
    Now the number is ‘6’ so we have to find the “6th” Fibonacci number
    So by using the property of the Fibonacci series i.e

    [ 1, 1, 2, 3, 5, 8]
    So the “6th” element is “8” hence we get the output.

*/

#include <iostream>
using namespace std;

int main()
{
    // Write your code here.
    int n;
    cin >> n;

    int t1 = 1; //a
    int t2 = 1; //b
    int t3 = 0; //c

    for (int i = 1; i < n; i++)
    {
        t3 = t1 + t2; //c = a+b
        t1 = t2; //a = b;
        t2 = t3; //b = c;
    }

    cout << t1 << endl; //a
}