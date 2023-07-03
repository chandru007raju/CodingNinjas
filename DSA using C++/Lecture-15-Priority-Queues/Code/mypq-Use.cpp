#include<iostream>
#include "MypriorityQueue.h"

using namespace std;

int main()
{
    MyPriorityQueue p;
    /*
    // One Set Of Example -->
    p.insert(100);
    p.insert(10);
    p.insert(11);
    p.insert(30);
    p.insert(7);
    p.insert(80);
    p.insert(2);
    p.insert(30);

    */

    // 2nd Set Of Example -->

    p.insert(100);
    p.insert(10); //  --> 2 nd
    p.insert(15); 
    p.insert(4);  // ---> 1 st
    p.insert(17);
    p.insert(21);
    p.insert(67);

    cout<<p.GetSize()<<" -> size"<<endl;
    cout<<p.MyremoveMin()<<endl;
    cout<<p.GetSize()<<" -> size"<<endl;

    cout<<p.GetMin()<<" --> Get Min "<<endl;

    while(!p.isEmpty()){
        cout<<p.removeMin()<<" ";
    }

    return 0;

}