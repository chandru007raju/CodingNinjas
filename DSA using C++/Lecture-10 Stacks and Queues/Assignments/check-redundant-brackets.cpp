
#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool checkRedundantBrackets(string expression)
{
    stack<char>s;
    int i=0;
    while(expression[i] != '\0'){
        if(expression[i] != ')'){
            s.push(expression[i]);
        }
        else
        {
            int count = 0;
            while(s.top() != '(')
            {
                s.pop();
                count++;
            }
            if(count <= 1){
                return true;
            }
            s.pop();
        }

        i++;
    }
    return false;
}

int main()
{
    string input;
    cin >> input;
    cout << ((checkRedundantBrackets(input)) ? "true" : "false");
}

// bool checkRedundantBrackets(string expression) // (a+b)()
// {
//     stack<char> s;
//     for (int i = 0; expression[i] != '\0'; i++)
//     {
//         if (expression[i] != ')')
//         {
//             s.push(expression[i]);
//         }
//         else
//         {
//             int count = 0;
//             while (s.top() != '(')
//             {
//                 s.pop();
//                 count++;
//             }
//             if (count <= 1)
//             {
//                 return true;
//             }
//             s.pop();
//         }
//     }
//     return false;
// }