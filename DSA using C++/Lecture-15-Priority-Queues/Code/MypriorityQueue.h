#include <iostream>
#include <vector>

using namespace std;

class MyPriorityQueue
{
private:
    vector<int> pq;

public:
    MyPriorityQueue()
    {
    }

    bool isEmpty()
    {
        return pq.size() == 0;
    }

    int GetSize()
    {
        return pq.size();
    }

    int GetMin()
    {
        if (pq.empty())
        {
            return 0;
        }
        return pq[0];
    }

    void insert(int element)
    {
        pq.push_back(element);

        int childIndex = pq.size() - 1;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex])
            {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            }
            else
            {
                break;
            }
            childIndex = parentIndex;
        }
    }
    /*

    */

    int MyremoveMin()
    { // -->1 -->2 -->3
        if (pq.empty())
        {
            return 0;
        }
        int ans = pq[0];

        int last = pq[pq.size() - 1];
        pq[0] = last; // --> meaning --> pq[0] = 3 ;
        // pq turns to be   -->3 -->2  this is a CBT but not holds the property of heap order property

        pq.pop_back();

        int parentIndex = 0;
        int LeftChildIndex = 2 * parentIndex + 1;
        int RightChildIndex = 2 * parentIndex + 2;

        while (LeftChildIndex < pq.size())
        {
            int minIndex = parentIndex;
            if (pq[minIndex] > pq[LeftChildIndex])
            {
                minIndex = LeftChildIndex;
            }
            if (RightChildIndex < pq.size() && pq[minIndex] > pq[RightChildIndex])
            {
                minIndex = RightChildIndex;
            }
            if (minIndex == parentIndex)
            {
                break;
            }
            int temp = pq[minIndex];
            pq[minIndex] = pq[parentIndex];
            pq[parentIndex] = temp;

            parentIndex = minIndex;
            LeftChildIndex = 2 * parentIndex + 1;
            RightChildIndex = 2 * parentIndex + 2;
        }
        return ans;
    }

    /*

    */

    int removeMin()
    {
        if (pq.empty())
        {
            return 0;
        }
        int ans = pq[0];
        pq[0] = pq[pq.size() - 1];

        pq.pop_back();

        int parentIndex = 0;
        int LeftChildIndex = 2 * parentIndex + 1;
        int RightChildIndex = 2 * parentIndex + 2;

        while (LeftChildIndex < pq.size())
        {
            int minIndex = parentIndex;
            if (pq[minIndex] > pq[LeftChildIndex])
            {
                minIndex = LeftChildIndex;
            }
            if (RightChildIndex < pq.size() && pq[minIndex] > pq[RightChildIndex])
            {
                minIndex = RightChildIndex;
            }
            if (minIndex == parentIndex)
            {
                break;
            }
            int temp = pq[minIndex];
            pq[minIndex] = pq[parentIndex];
            pq[parentIndex] = temp;

            parentIndex = minIndex;
            LeftChildIndex = 2 * parentIndex + 1;
            RightChildIndex = 2 * parentIndex + 2;
        }
        return ans;
    }
};