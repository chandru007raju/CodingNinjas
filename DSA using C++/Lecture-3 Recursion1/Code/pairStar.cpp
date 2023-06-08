#include<iostream>
using namespace std;
#include<string.h>

void pairStar(char input[]) 
{
 if(input[0]=='\0')
     return;
    if(input[0]==input[1])
    {
        int size = strlen(input);
        for(int i = size + 1; i>=2; i--)
        {
            input[i] = input[i-1];
        }
        input[1]='*';
    }
    
    pairStar(input+1);
}

int main(){

    char input[1000];
    cin.getline(input,1000);

    pairStar(input);

    for(int i = 0;input[i] != '\0';i++){
        cout<<input[i];
    }
    
}