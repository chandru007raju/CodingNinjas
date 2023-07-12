//Longest common subsequence 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int lcs(string s, string t){
    if (t.size() == 0 || s.size() == 0){
        return 0;
    }

    if (s[0] == t[0]){
        return 1 + lcs(s.substr(1), t.substr(1));
    }
    else{
        int a = lcs(s.substr(1), t);
        int b = lcs(s, t.substr(1));
        //int c = lcs(s.substr(1), t.substr(1)); This call wont effect ans .. make recursion tree to see this case will be managed by above two only
        return max(a, b);
    }
}

int main(){
    string s, t;
    cin >> s >> t;
    cout << lcs(s, t) << endl;
}

/*.................PRACTICE.......................*/

//brute force --> for Length of Longest common subsequence -->

/*
int lcs(string s,string t){
    // Base Case -->
    if(s.size() == 0 || t.size() == 0){
        return 0;
    }

    if(s[0] == t[0]){
        return lcs(s.substr(1),t.substr(1)) + 1;
    }

    // Recursive call -->
    int x = lcs(s,t.substr(1));
    int y = lcs(s.substr(1),t);
    int z = lcs(s.substr(1),t.substr(1));
    // OR  -->
    //int c = lcs(s.substr(1), t.substr(1)); This call wont effect ans .. make recursion tree to see this case will be managed by above two only


    // Small calculation -->
    int smallans = min(x,min(y,z));

    return smallans;
}
*/