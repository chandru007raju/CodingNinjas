#include<iostream>
#include<stack>
#include<queue>

using namespace std;

// If This Program Does Not Run Then Run This file in the Replit online this works well !;

int main(){

    stack<int> s1;
    queue<int>q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    cout<<q1.size()<<endl;

    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }

}