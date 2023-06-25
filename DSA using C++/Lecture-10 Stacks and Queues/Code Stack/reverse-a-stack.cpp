/*
Reverse a Stack
You have been given two stacks that can store integers as the data. Out of the two given stacks, one is populated and the other one is empty. You are required to write a function that reverses the populated stack using the one which is empty.
For Example:

Input Format :
The first line of input contains an integer N, denoting the total number of elements in the stack.

The second line of input contains N integers separated by a single space, representing the order in which the elements are pushed into the stack.

Output Format:
The only line of output prints the order in which the stack elements are popped, all of them separated by a single space. 

Note:
You are not required to print the expected output explicitly, it has already been taken care of. Just make the changes in the input stack itself.

Constraints:
1 <= N <= 10^3
-2^31 <= data <= 2^31 - 1

Time Limit: 1sec 

Sample Input 1:
6
1 2 3 4 5 10
Note:
Here, 10 is at the top of the stack.
Sample Output 1:
1 2 3 4 5 10

Note:
Here, 1 is at the top of the stack.

Sample Input 2:
5
2 8 15 1 10
Sample Output 2:
2 8 15 1 10
*/

#include <iostream>
#include <stack>
using namespace std;

/*
void reverseStack(stack<int> &input, stack<int> &extra) // -->1 -->2 -->3
{
    int n = input.size();
    for (int i = 0; i < n; i++)
    {
        int temp = input.top();// "3" for i = 0,1 st iteration  --> "2" for i = 1,2 nd iteration
        input.pop();// --> 3
        for (int j = 0; j < n - i - 1; j++) // n-i - 1 times
        {
            extra.push(input.top());// extra 2 <--  1<--
            input.pop(); // pop (2) , pop (1)-->
        }
        input.push(temp);// input push(3)
        for (int j = 0; j < n - i - 1; j++) // for n-i -1 times
        {
            input.push(extra.top());// input push(1), push (2)
            extra.pop();// --> pop(1) ,pop(2)
        }
    }
}
*/
void reverseStack(stack<int> input,stack <int> extra){
    int n = input.size();
    for(int i=0;i<n;i++){
        int temp = input.top();
        input.pop();
        for(int j=0;j<n-i-1;j++){
            extra.push(input.top());
            input.pop();
        }
        input.push(temp);
        for(int j=0;j<n-i-1;j++){
            input.push(extra.top());
            extra.pop();
        }
    }
}

int main()
{
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++)
    {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty())
    {
        cout << input.top() << " ";
        input.pop();
    }
}