#include<iostream>
using namespace std;

string helper(int n){
    string code[] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    return code[n];
}

int returnKeypad(string output[],int n){ // 2 3 4

    if(n == 0 || n == 1){        
        output[0] = "";
        return 1;
    }
    int smallOutputsize = returnKeypad(output,n/10);
    int no = n % 10;
    int size;
    string code = helper(no-2); // starts from 2 and array starts from 0 so we do like this
    if (no == 2 || no == 3 || no == 4 || no == 5 || no == 6 || no == 8)
    {
        size = 3;
    }
    else
    {
        size = 4;
    }
    for (int i = size - 1; i >= 0; i--)
    {
        for (int j = 0; j < smallOutputsize; j++)
        {
            if (i == 0)
            {
                output[j] += code[i];
            }
            else
            {
                output[j + (smallOutputsize * (size - i))] = output[j]; //first we will assign this to previous strings  and then in next statement we will concate these two strings.
                output[j + (smallOutputsize * (size - i))] += code[i];
            }
        }
    }

    return smallOutputsize * size;
    

}

int main(){
    int n;
    cin>>n;

    string* output = new string [1000];

    int count = returnKeypad(output,n);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
}