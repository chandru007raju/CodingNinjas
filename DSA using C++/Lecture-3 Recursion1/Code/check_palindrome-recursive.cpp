#include<iostream>
using namespace std;

int length(char str[]){

    int len = 0;
    while(str[len] != '\0'){
        len++;
    }
    return len;
}

bool check(char str[],int start,int end){
    if(start >= end){  // Base Case
        return true;
    }
    if(str[start] != str[end]){  //  Small Calculation
        return false;
    }
    return check(str,start + 1,end -1); // recursion call
}

bool checkpalli(char str[]){

    int len = length(str);
    int start = 0;
    int end = len -1;
    return check(str,start,end);

}

int main(){
    char str[50];
    cin.getline(str,50);

    cout<<checkpalli(str);
    return 0;
}
