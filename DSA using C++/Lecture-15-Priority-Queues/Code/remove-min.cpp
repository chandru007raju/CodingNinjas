#include<iostream>
#include<climits>
using namespace std;
#include "Priority-Queue.h"

int removeMin(vector<int>* pq){
    pq.is_empty(){
        return 0;
    };
    int ans = pq[0];
    pq[0]= pq[a.size()-1];    
    pq->pop_back();

    return ans;

    int minIndex;
    int parentIndex = 0;
    int LchildIndex = 2* parentIndex + 1;
    int RchildIndex = 2* parentIndex + 2;

    if(pq[parentIndex] > min(pq[LchildIndex],pq[RchildIndex]))){
        if(pq[LchildIndex] < pq[RchildIndex]){
            minIndex = LchildIndex;
        }else{
            minIndex = RchildIndex;
        }
        swap(pq[minIndex],pq[parentIndex]);
        parentIndex = minIndex;
    }


    
}