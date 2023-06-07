#include<iostream>
using namespace std;

void replaceChar(char str[],char ch,char change){ // input --> Simple --> S -->D  = Dimple

    if(str[0] == '\0'){
        return;
    }
    if(str[0] == ch){
        str[0] = change;
        replaceChar(str+1,ch,change);        
    }else{
        replaceChar(str+1,ch,change);
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

    char ch,change;
    cin>>ch>>change;

    replaceChar(str,ch,change);

    cout<<str<<endl;       

}