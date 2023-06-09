
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isBalanced(string expression)
{
    stack<char> s;
    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (expression[i] == '(')
        {
            s.push(expression[i]);
        }
        else if (expression[i] == ')')
        {
            if (s.empty())
            {
                return false;
            }
            else if (s.top() == '(')
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return (s.empty() ? true : false);
}

int main()
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}