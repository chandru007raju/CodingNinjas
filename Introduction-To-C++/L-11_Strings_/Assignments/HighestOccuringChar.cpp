// Problem Description:- Highest Occuring Character

/*
For a given a string(str), find and return the highest occurring character.

Example:
    Input String: "abcdeapapqarr"
    Expected Output: 'a'
    Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
    If there are two characters in the input string with the same frequency, return the character which comes first.

Consider:
    Assume all the characters in the given string to be in lowercase always.

Input Format:
    The first and only line of input contains a string without any leading and trailing spaces.

Output Format:
    The only line of output prints the updated string.

Note:
    You are not required to print anything explicitly. It has already been taken care of.

Constraints:
    0 <= N <= 10^6
    Where N is the length of the input string.

    Time Limit: 1 second

Sample Input 1:
    abdefgbabfba
Sample Output 1:
    b
Sample Input 2:
    xy
Sample Output 2:
    x
*/

#include <iostream>
#include <cstring>
using namespace std;

// #include "solution.h"

char highestOccurringChar(char input[]) // input = --> cdd
{
    // Write your code here
    int freq[256] = {0}; /*Total characters = 256  i.e includes @ 1 % _ A a everything --> we initialize the presence of these chars in array
     to zero because the occurance of these chars in the input is equal to zero
*/ 
    for (int i = 0; input[i] != '\0'; i++)
    {
        // cout<<"before : "<<freq[(int)input[i]]<<endl;
        freq[(int)input[i]] ++;  //Convert the char into int and increment the frequency of the resultant integer in the frequency Array; 
        // cout<<"After : "<<freq[(int)input[i]]<<endl;
        // cout<<(int)input[i]<<endl; // freq[99] will be incremented --> freq[(int)input[i]]++    i.e freq[99] ++
        }

    char ans = input[0];
    int Maxcount = freq[(int)input[0]]; // Or you can assign this to -1 also...i.e the precence of that char in the input

    for (int i = 1; input[i] != '\0'; i++)
    {
        int occur = freq[(int)input[i]];
        if (occur > Maxcount)
        {
            ans = input[i];
            Maxcount = occur;
        }
    }

    return ans;
}
char HighOccur(char input[]){
    int arr[256] = {0};
    for(int i=0;input[i] != '\0';i++){
        arr[(int)input[i]] ++;
    }
    char ans = input[0];
    int count = arr[(int)input[0]];

    for(int i=0;i<input[i] != '\0';i++){
        int occur = arr[(int)input[i]];
        if(occur>count){
            ans = input[i];
            count = occur;
        }
    }
    return ans;


}

// int main()
// {
//     
//     string str; //string Type
//     cin>>str;
//     cout << highestOccurringChar(str);
// }

//OR 

int main()
{
    int size = 1e6;
    char str[size]; //  Chararcter Array Type
    cin.getline(str,size);
    cout << highestOccurringChar(str)<<endl;
    cout<<HighOccur(str);
    
}

