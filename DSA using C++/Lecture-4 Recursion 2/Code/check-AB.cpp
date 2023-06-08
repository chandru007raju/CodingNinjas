#include<iostream>
using namespace std;

bool CheckAb(char input[]){ // abb

    if(input[0] == '\0'){
        return true;        
    }
    else if(input[0] == 'a' && input[1] == 'a'){
        return CheckAb(input + 1);
    }
    else if(input[0] == 'a' && input[1] == '\0'){
        return true;
    }
    else if(input[0] == 'a' && input[1] == 'b' && input[2] == 'b'){
        return CheckAb(input + 3);
    } 
    return false;
     
}

int main(){
    char input[1000];
    cin.getline(input,1000);

    bool ans = CheckAb(input);
    if (ans)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}