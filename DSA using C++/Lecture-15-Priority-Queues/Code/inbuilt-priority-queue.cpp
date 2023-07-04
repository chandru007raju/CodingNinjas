#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // priority_queue<int> pq; // Max Priority Queue --> Implementation

    priority_queue<int, vector<int>, greater<int> > pq; // Min Priority Queue --> Implementation

    pq.push(100);
    pq.push(10);
    pq.push(50);
    pq.push(70);
    pq.push(20);
    pq.push(30);
    pq.push(1);

    cout << pq.size() << " --> size" << endl;
    cout << pq.top() << " --> top" << endl;

    cout << " --> Empty? -->"<< pq.empty() << endl;

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}