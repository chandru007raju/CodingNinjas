
#include <iostream>
// #include "stack-using-array.cpp"
#include "StackLLT.cpp" // You Can Use This Or You Can Use The InBuilt Library called Stack

#include <string>
// #include <bits/stdc++.h>
using namespace std;

bool isBalanced(string expression)
{
    StackLLT<char> s;
    for (int i = 0; expression[i] != '\0'; i++)
    {
        if (expression[i] == '(')
        {
            s.push(expression[i]);
        }
        else if (expression[i] == ')')
        {
            if (s.isEmpty())
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
    return (s.isEmpty() ? true : false);
}

int main()
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}