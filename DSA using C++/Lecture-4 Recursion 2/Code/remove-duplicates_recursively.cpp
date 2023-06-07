#include<iostream>
using namespace std;

void removeDuplicate(char str[]){ // input --> Simple --> S -->D  = Dimple

    if(str[0] == '\0'){
        return;
    }
    if(str[0] == str[1]){
        int i=1;
        for(;str[i] != '\0';i++){
            str[i-1] = str[i];            
        }
        str[i-1] = str[i];
        removeDuplicate(str);        
    }else{
        removeDuplicate(str+1);
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
    char str[100];
    cin.getline(str,100);


    removeDuplicate(str);

    cout<<str<<endl;       

}