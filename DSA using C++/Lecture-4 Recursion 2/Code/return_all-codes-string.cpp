#include<iostream>
#include <string.h>

using namespace std;

int returnAllCodes(string input,string output[100]){

    if(input.empty())
    {
        output[0] = "";
        return 1;
    }

    string output1[500];
    string output2[500];

    char firstChar = 'a' + int(input[0] -48) - 1 ;
    char secondChar = '\0';

    int size1 = returnAllCodes(input.substr(1),output1);
    int size2 = 0;

    if(input[1] != '\0')
    {
        int no = (input[0] - 48)*10 + (input[1] - 48);
        if(no <= 26){
            secondChar = 'a' + no - 1;
            size2 = returnAllCodes(input.substr(2),output2);
        }
    }

    for(int i=0;i<size1;i++)
    {
        output[i] = firstChar + output1[i];
    }

    for(int i=0;i<size2;i++)
    {
        output[i + size1] = secondChar + output2[i];
    }

    return size1 + size2;
}

int main(){
    string input;
    cin>>input;

    string output[100];
    int count = returnAllCodes(input,output);

    for(int i=0;i<count && i<100;i++){
        cout<<output[i]<<endl;
    }
    return 0;

}