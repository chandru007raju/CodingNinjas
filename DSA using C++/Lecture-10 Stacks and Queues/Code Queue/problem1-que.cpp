
#include<iostream>
#include "QueueUsingLL.h"
using namespace std;


int main(){
    int q;
    cin>>q;

    Queue<int> s;
    int choice,ele;
    while(q--){

        int choice,ele;
        cin>>choice;

        switch(choice){
            case 1: 
                cin>>ele;
                s.enqueue(ele);
                break;
            case 2:
                cout<<s.dequeue()<<endl;
                break;
            case 3:
                cout<<s.front()<<endl;
                break;
            case 4:
                cout<<((s.isEmpty())? "true\n": "false\n");
                break;
            case 5:
                cout<<s.getsize()<<endl;
                break;
        }
    }
}