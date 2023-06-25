#include<iostream>
#include "Queue-Using-Array.h"
using namespace std;

int main(){ //  Dynamically -->
    
    QueueUsingArrayD<int> q;

    cout<<q.getSize()<<"--> queue size"<<endl;

    q.enqueue(5); // similar to push();

    cout<<q.front()<<"-->element at front"<<endl;    

    q.dequeue(); // similar to pop()  


    q.enqueue(10);    
    q.enqueue(20);
    q.enqueue(30);        
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.front()<<"-->element at front"<<endl;

    q.enqueue(60);

    cout<<q.getSize()<<"--> queue size"<<endl;

    cout<<q.front()<<"-->element at front"<<endl;

    while(!q.isEmpty()){
        cout<<q.front()<<" ";
        q.dequeue();
    }
}

/*

int main(){
    
    QueueUsingArray<int> q(10);

    cout<<q.getSize()<<"--> queue size"<<endl;

    q.enqueue(5); // similar to push();

    cout<<q.front()<<"-->element at front"<<endl;    

    q.dequeue(); // similar to pop()  


    q.enqueue(10);    
    q.enqueue(20);
    q.enqueue(30);        
    q.enqueue(40);
    q.enqueue(50);
    cout<<q.front()<<"-->element at front"<<endl;

    q.enqueue(60);

    cout<<q.getSize()<<"--> queue size"<<endl;

    cout<<q.front()<<"-->element at front"<<endl;

    while(!q.isEmpty()){
        cout<<q.front()<<" ";
        q.dequeue();
    }
}

*/


