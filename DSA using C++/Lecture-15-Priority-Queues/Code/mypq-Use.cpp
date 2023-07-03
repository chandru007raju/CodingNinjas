#include<iostream>
#include "maxpPriorityQueue.h"
// #include "MypriorityQueue.h"

using namespace std;


// int main()
// {
//     MyPriorityQueue p;
//     /*
//     // One Set Of Example -->
//     p.insert(100);
//     p.insert(10);
//     p.insert(11);
//     p.insert(30);
//     p.insert(7);
//     p.insert(80);
//     p.insert(2);
//     p.insert(30);

//     */
//     /* 2nd Set Of Example --> */

//     p.insert(100);
//     p.insert(10); //  --> 2 nd
//     p.insert(15); 
//     p.insert(4);  // ---> 1 st
//     p.insert(17);
//     p.insert(21);
//     p.insert(67);

//     cout<<p.GetSize()<<" -> size"<<endl;
//     cout<<p.MyremoveMin()<<endl;
//     cout<<p.GetSize()<<" -> size"<<endl;

//     cout<<p.GetMin()<<" --> Get Min "<<endl;

//     while(!p.isEmpty()){
//         cout<<p.removeMin()<<" ";
//     }

//     return 0;

// }



//  FOR THE maxpPriorityQueue folder -->

int main()
{
    PriorityQueue mp; // Max Priority Queue -->
    mp.insert(10);
    mp.insert(100);
    mp.insert(15);
    mp.insert(110); // --> 2 nd
    // mp.insert(60);
    // mp.insert(45);
    // mp.insert(1000); // --> 1 st


    cout<<" Size ->" <<mp.getSize()<<endl;

    cout<<" Get Max ->" <<mp.getMax()<<endl;

    cout<<" Remove Max element ->" <<mp.removeMax()<<endl;

    cout<<" Size ->" <<mp.getSize()<<endl;

    while(! mp.isEmpty()){
        cout<<mp.removeMax()<<" ";
    }

    return 0;
}

    // 10
    // 100 10
    // 100 10 15 -> 100 10 15 [110] swap with index 1 --> 
    // 100  [110] 15 10  swap with index 0 -->
    // 110 100 15 10 -----------------> insert(60)  


