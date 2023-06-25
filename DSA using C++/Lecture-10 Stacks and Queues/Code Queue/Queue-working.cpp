#include <iostream>
#include "QueueUsingLL.h"
using namespace std;

int main()
{
    Queue<char> q;

/*
    Queue<int> q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);

    cout<<" Queue elements are : ";
    while(!q1.isEmpty()){
        cout<<q1.front()<<" ";
        q1.dequeue();
    }
*/

    q.enqueue('a');
    q.enqueue('b');
    q.enqueue('c');
    q.enqueue('d');
    q.enqueue('e');
    q.enqueue(102);

    cout << q.front() << endl;
    cout << q.dequeue() << endl; //--> -1
    cout << q.dequeue() << endl; //--> -1
    cout << q.dequeue() << endl; //--> -1
    cout << q.getsize() << " --> size of LL "<<endl;
    cout << q.isEmpty() << " --> is  empty? "<<endl;


    cout<<" Queue elements are : ";
    while(!q.isEmpty()){
        cout<<q.front()<<" ";
        q.dequeue();
    }

    return 0;
}
