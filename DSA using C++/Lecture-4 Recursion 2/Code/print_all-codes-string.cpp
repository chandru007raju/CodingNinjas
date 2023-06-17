#include<iostream>
#include<string.h>

using namespace std;

void helper(string input,string output){

    if(input.length() == 0){
        cout<<output<<endl;
        return;
    }
    char firstChar = 'a' + int (input[0]-48) - 1;  // This 

    // OR

    // char firstChar = 'a' + (input[0]-49);

    helper(input.substr(1),output + firstChar);
    if(input[1] != '\0'){
        int no = (input[0] - 48) * 10 + (input[1] - 48);
        if(no <= 26){
            char secondChar = 'a' + no - 1;
            helper(input.substr(2),output + secondChar);
        }
    }
}

void printAllCodes(string input){

    string output;
    helper(input,output);
}

int main(){
    string input;
    cin>>input;

    printAllCodes(input);
    return 0;    

}