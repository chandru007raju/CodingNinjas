#include <iostream>
#include <cstring>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i=0;input[i] != '\0';i++){
        count++;
    }
    return count;
}
void reverse(char input[],int start,int end){
    int i = start;
    int j = end;

    while(i<=j){
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
    
}

bool StrPallindrome(char input[]){
    bool ispallindrome = true;
    int size = length(input);
    int start = 0;
    int end = size-1;

    while(start<=end){
        if(input[start] != input[end]){
            ispallindrome = false;
            break;
        }else{
            start++;
            end--;
        }
    }
    return ispallindrome;    
}

int main(){
    int s = 1e6;
    char input[s];
    cin.getline(input,s);
    
    cout<<StrPallindrome(input);
}

/*
#include<iostream>
#include<string.h>
using namespace std;

bool checkPallindrome(string s1){
    bool ispalli  =true;
    int size = s1.length();
    // cout<<size<<endl;
    int s = 0;
    int e = size-1;
    // cout<<e<<endl;
    while(s<=e){
        if(s1[s] != s1[e]){
            ispalli = false;
            break;
        }else{
            s++;
            e--;
        }
    }
    return ispalli;
}

int main(){
    string s1;
    cin>>s1;

    cout<<checkPallindrome(s1);
}
*/

