// Problem Description:- Remove consecutive Duplicates

/*
For a given string(str), remove all the consecutive duplicate characters.

Example:
    Input String: "aaaa"
    Expected Output: "a"

    Input String: "aabbbcc"
    Expected Output: "abc"

Input Format:
    The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.

Output Format:
    The only line of output prints the updated string.

Note:
    You are not required to print anything. It has already been taken care of.

Constraints:
    0 <= N <= 10^6
    Where N is the length of the input string.

    Time Limit: 1 second

Sample Input 1:
    aabccbaa
Sample Output 1:
    abcba

Sample Input 2:
    xxyyzxx
Sample Output 2:
    xyzx
*/

#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"

void removeConsecutiveDuplicates(char input[])
{
    // Write your code here
    int lastIndex = 0;
    for (int i = 1; input[i] != '\0'; i++)
    {
        if (input[lastIndex] != input[i])
        {
            input[++lastIndex] = input[i];
            // lastIndex++;
        }
    }
    input[lastIndex + 1] = '\0';
}

void RemoveRepeating(char str[]){
    int j = 0;
    for(int i=1; str[i]!='\0';i++){
        if(str[j] != str[i]){

            cout<<str<<endl;
            cout<<str[0]<<" "<<str[1]<<" "<<str[2]<<" "<<str[3]<<endl;
            cout<<j<<"-->";   

            // str[++j] = str[i];
            //OR
            j++;          
            str[j] = str[i];
            
            cout<<j<<endl;
        }       
    }
    str[j+1] = '\0';
}

int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str,size);
    // removeConsecutiveDuplicates(str);
    RemoveRepeating(str);
    cout << str;
}