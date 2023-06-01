#include<iostream>
using namespace std;

int main(){
    int n;
    cin >>n;

    int prev,current;
    cin>>prev;
    int count = 2;
    
    bool isDec = true;
    bool isInc = false;

    while(count <= n){

        cin>> current;
        
        if (current > prev)
        {
            isInc = true;
        }
        else if(current < prev){
            if(isDec == true && isInc == false)
            {
                isDec = true;
            }
            else{
                isDec =false;
            }
        }else{
            isDec = false;
            isInc = false;
        }
        prev = current;
        count++;
    }  
    if(isDec){
        cout<<"true";
    }else{
        cout<<"false";
    }     
       
    
}