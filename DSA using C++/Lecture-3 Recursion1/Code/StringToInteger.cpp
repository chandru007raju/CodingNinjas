#include<iostream>
#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int strToInt(string input){ // 1 2 3
    if(input.size() == 1){
        return input[0] - '0';
    }
    int len = input.size() -1;
    int smalloutput = strToInt(input.substr(1));
    int ans = (input[0]-'0')* pow(10,len) + smalloutput;

    return ans;

}

int main(){
    string input;
    cin>>input;
    

    int ans = strToInt(input);
    cout<<ans<<endl;
}