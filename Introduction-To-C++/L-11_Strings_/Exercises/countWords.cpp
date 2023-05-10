#include<iostream>
#include<cstring>

using namespace std;

int countWords(char str[]){
    int count = 1;
    for(int i=0;str[i] != '\0';i++){
        if(str[i] == ' '){
            count++;
        }
    }
    return count;
}

int main(){
    int s =1e6;
    char str[s];
    cin.getline(str,s);
    cout<<countWords(str);
}