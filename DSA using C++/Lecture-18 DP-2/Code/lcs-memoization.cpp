//Longest common subsequence 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int helper(string s, string t, int **output){
    int m = s.size();
    int n = t.size();

    //Base case
    if (s.size() == 0 || t.size() == 0){
        return 0;
    }

    //Check if already exist
    if (output[m][n] != -1){
        return output[m][n];
    }

    //Recursive call
        if (s[0] == t[0]){
        output[m][n] = 1 + helper(s.substr(1), t.substr(1), output);
        return output[m][n];
    }
    else{
        int a = helper(s.substr(1), t, output);
        int b = helper(s, t.substr(1), output);
        output[m][n] = max(a, b);
        return output[m][n];
    }
}

int lcs(string s, string t){
    int m = s.size();
    int n = t.size();
    int **output = new int*[m + 1];
    for (int i = 0; i < m + 1; i++){
        output[i] = new int[n + 1];
        for (int j = 0; j < n + 1; j++){
            output[i][j] = -1;
        }
    }
    return helper(s, t, output);
}

int main(){
    string s, t;
    cin >> s >> t;
    cout << lcs(s, t) << endl;
}

/*...................PRACTICE......................*/

//  Memoization -->
/*
int helper(int ** output,string s, string t){

    int m = s.size();
    int n = t.size();
    
    // Base case -->
    if(s.size() == 0 || t.size() == 0){
        return 0;
    }

    // Check if ans already present -->
    if(output[m][n] != -1){
        return output[m][n];
    }

    //Recursive calls
    // if the first char matches in both the strings --->
    if(s[0] == t[0]){
        int ans = 1 + helper(output,s.substr(1),t.substr(1));
        return ans;
    }
    else{
        int x = helper(output,s.substr(1),t);
        int y = helper(output,s,t.substr(1));
    }
    
    //Small answer -->
    int ans = max(x,y);

    //Save the Answer for future Use -->
    output[m][n] = ans;

    return ans;    

}

int lcs(string s,string t){
    int m = s.size();
    int n = t.size();

    int ** output = new int *[m+1];
    for(int i = 0; i < m+1 ;i++){
        output[i] = new int[n+1];
        for(int j = 0; j < n+1 ;j++){
            output[i][j] = -1;
        }
    }

    helper(output,s,t);
}
*/