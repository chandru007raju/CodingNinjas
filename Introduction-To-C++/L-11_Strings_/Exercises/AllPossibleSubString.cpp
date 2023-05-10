#include <iostream>
using namespace std;

void printSubStrings(char input[]){ //chandu

    for(int start=0;input[start] != '\0';start++){
        for(int end = start;input[end] != '\0';end++){
            for(int i=start;i<=end;i++){
                cout<<input[i];
            }
            cout<<endl;
        }

    }

}

int main(){
    int s = 1e6;
    char input [s];
    cin.getline(input,s);
    printSubStrings(input);

}