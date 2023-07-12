#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int lcs(string s, string t){
    int m = s.size();
    int n = t.size();
    int **dp = new int*[m + 1];
    for (int i = 0; i < m + 1; i++){
        dp[i] = new int[n + 1];
    }

    for (int i = 0; i <= m; i++){
        dp[i][0] = 0;
    }
    for (int i = 1; i <= n; i++){
        dp[0][i] = 0;
    }

    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (s[m - i] == t[n - j]){
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else{
                dp[i][j] = max(dp[i - 1][j - 1], max(dp[i - 1][j], dp[i][j - 1])); 
            }
        }
    }
    int ans = dp[m][n];

    for (int i = 0; i < m; i++){
        delete []dp[i];
    }

    delete []dp;
    return ans;
}

int main(){
    string s, t;
    cin >> s >> t;
    cout << lcs(s, t) << endl;
}

/*..........................PRACTICE .....................*/

/*
//--> video timing 22:45 min --> imp step

int lcs(string s, string t){ // important step --> check first character step 

    int m = s.size();
    int n = t.size();

    int ** dp = new int* [m+1];
    for(int i = 0; i < m+1; i++){
        dp[i] = new int [n+1];
    }

    // Fill 1 st row -->
    for(int j = 0;j < n+1; j++){
        dp[0][j] = 0;
    }

    //Fill 1 st column-->
    for(int i = 0; i < m+1; i++){
        dp[i][0] = 0;
    }

    for(int i = 1;i < m+1; i++){
        for(int j = 1;j<= n+1; j++){

            if(s[m - i] == t[n - j]){ // important step -->

                dp[i][j] = 1 + dp[i-1][j-1];

            }
            else
            {
                // int a = dp[i-1][j];
                // int b = dp[i][j-1];
                // int c = dp[i-1][j-1];
                // dp[i][j] = max(a,max(b,c));

                //  OR -->

                dp[i][j] = max( dp[i-1][j-1] ,max( dp[i-1][j] , dp[i][j-1] )) ;

            }            
        }
    }

    int ans = dp[m][n];

    for(int i = 0;i < m+1;i++){
        delete[]dp[i];
    }
    
    delete[]dp;
    return ans;
}

*/