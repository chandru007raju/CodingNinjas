// Problem Description:- Compress the String

/*
Write a program to do basic string compression. For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.

Example:
    If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".

    The string is compressed only when the repeated character count is more than 1.

Note:
    Consecutive count of every character in the input string is less than or equal to 9.

Input Format:
    The first and only line of input contains a string without any leading and trailing spaces.

Output Format:
    The output contains the string after compression printed in single line.

Note:
    You are not required to print anything. It has already been taken care of. Just implement the given function.

Constraints:
    0 <= N <= 10^6

    Where 'N' is the length of the input string.

    Time Limit: 1 sec

Sample Input 1:
    aaabbccdsa
Sample Output 1:
    a3b2c2dsa
Explanation for Sample Output 1:
    In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is repeated 2 times and 'd', 's' and 'a' and occuring 1 time hence no compression for last 3 characters.

Sample Input 2:
    aaabbcddeeeee
Sample Output 2:
    a3b2cd2e5
Explanation for Sample Output 2:
    In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is occuring single time, 'd' is repeating 2 times and 'e' is repeating 25times.
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// #include "solution.h"

string getCompressedString(string &input)
{
    // Write your code here.
    // Write your code here
    int size = 1e6;
    char compressString[size];
    for (int i = 0; i <= input.length(); i++)
    {
        compressString[i] = input[i];
    }
    int lastIndex = 0;
    int count = 49;
    for (int i = 1; i <= strlen(compressString); i++)
    {
        if (compressString[i] == compressString[lastIndex])
        {
            count++;
        }
        else
        {
            if (count == 49)
            {
                compressString[++lastIndex] = compressString[i];
                count = 49;
            }
            else if (i == strlen(compressString))
            {
                compressString[lastIndex + 1] = count;
                compressString[lastIndex + 2] = '\0';
            }
            else
            {
                compressString[lastIndex + 1] = count;
                compressString[lastIndex + 2] = compressString[i];
                lastIndex = (lastIndex + 2);
                count = 49;
            }
        }
    }
    return compressString;
}

string CompressedString(string str){ //  aaabbcccdd -->a3b2c3d2
    int len = str.length();
    string ans = "";
    for(int i=0; i<len;i++){
        int count = 1;// OR count = 49;--> Convert the integer count into a string variable to push this into the string
        for(int j = i; j<len && str[j] == str[j+1];j++){
            count++;
            i++;
        }
        ans.push_back(str[i]);
        if(count> 1){
            ans.push_back(count + 48); // append zero as text
            // OR
            // ans.push_back(count + '0'); 

        }
    }
    return ans;
}

int main()
{
    int size = 1e6;
    string str,str1,str2;
    cin >> str;
    str1= getCompressedString(str);
    str2 = CompressedString(str);
    cout << str1 <<" " <<str2<< endl;
}