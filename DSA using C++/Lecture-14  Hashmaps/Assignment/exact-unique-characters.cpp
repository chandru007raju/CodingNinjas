/*
Extract Unique characters
Given a string S, you need to remove all the duplicates. That means, the output string should contain each character only once. The respective order of characters should remain same, as in the input string.

Input format:
The first and only line of input contains a string, that denotes the value of S.

Output format :
The first and only line of output contains the updated string, as described in the task.

Constraints :
0 <= Length of S <= 10^8
Time Limit: 1 sec

Sample Input 1 :
ababacd
Sample Output 1 :
abcd

Sample Input 2 :
abcde
Sample Output 2 :
abcde
*/

#include <iostream>
#include <string>
using namespace std;

#include <string>
#include <unordered_map>

string uniqueChar(string str)
{
    string ans = "";
    unordered_map<char, int> ump;
    for (int i = 0; i < str.length(); i++)
    {
        ump[str[i]]++;
        if (ump[str[i]] == 1)
        {
            ans += str[i];
        }
    }
    return ans;
}

int main()
{
    string str;
    cin >> str;
    cout << uniqueChar(str);
}

/**************************************************************************************/

// PRACTICE ----->

// string Unique(string str){
//     string s1 = "";
//     unordered_map <char,int> mapp;
//     for(int i =0;i<str.length();i++){
//         mapp[str[i]]++;
//         if(mapp[str[i]] == 1){
//             s1 += str[i];
//         }
//     }
//     return s1;
// }

// int main(){
//     string str;
//     cin>>str;
//     cout<<Unique(str);
//     return 0;
// }


/*********************************************************************************/

// PRACTICE ------>2

// string getUnique(string str){
//     string s1 = "";
//     unordered_map <char,int> mapp;
//     for(int i=0; i<str.length();i++){
//         mapp[str[i]]++;
//         if(mapp[str[i]] == 1){
//             s1 += str[i];
//         }
//     }
//     return s1;
// }

// int main ()
// {
//     string str;
//     cin >> str;
//     cout << getUnique(str);

// }

