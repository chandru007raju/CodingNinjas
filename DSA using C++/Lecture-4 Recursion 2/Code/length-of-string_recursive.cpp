#include<iostream>
using namespace std;

void removeX(char str[]){  // a xbxcx

    if(str[0] == '\0'){
        return;
    }
    if(str[0] == 'x'){
        int i = 1;
        for(;str[i] != '\0';i++){
            str[i-1] = str[i];
        }
        str[i-1] = str[i];
        removeX(str);

    }else{
        removeX(str+1);
    }

}

int len(char str[]){
    if(str[0] == '\0'){
        return 0;
    }
    int smallLength = len(str+1);
    return smallLength + 1;

}

int main(){
    char str[50];
    cin.getline(str,50);

    cout<<len(str)<<endl;    

    removeX(str);

    cout<<str<<endl;    
    cout<<len(str)<<endl;  

}