#include <iostream>
#include<cmath>
using namespace std;

int subSequence(string input,string output[]){ //a b c '\0'

    if(input[0] == '\0'){
        output[0] = "";
        return 1;
    }
    string smallString = input.substr(1);
    int smallOutput = subSequence(smallString,output);
    for(int i=0;i<smallOutput;i++){
        output[i + smallOutput] = input[0] + output[i];
    }
    return 2 * smallOutput;

}

int main(){

    string input;
    cin>>input;

    int sizeinput = input.size();
    int sizeOfOutput = pow(2,sizeinput);
    string* output = new string [sizeOfOutput];

    int count = subSequence(input,output);
    for(int i =0;i<count;i++){
        cout<<output[i]<<endl;
    }

}
