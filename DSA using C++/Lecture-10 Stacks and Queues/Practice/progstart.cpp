#include <iostream>
using namespace std;

template <typename T> 
class Array{

    private:
    int * data;
    int nextIndex;
    int capacity;

// -----> Using Templates -->
/*
class ArrayT{
    T * data;
    int nextIndex;
    int capacity;
*/


    public:

    /*
        Array(int totalSize){ // -->1 -->2 -->3 -->4
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }
    */

    Array(){ // -->1 -->2 -->3 -->4
        data = new int[4];
        nextIndex = 0;
        capacity = 4;
    }

/*
    ArrayT(){ // -->1 -->2 -->3 -->4
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }
*/

    // Previously we were doing this --> Static Memory

    // void push(int A){
    //     if(nextIndex == capacity){
    //         cout<<"stack is Full"<<endl;            
    //         return;
    //     }
    //     data[nextIndex] = A;
    //     nextIndex++;
    // }


//  Previous --> Static Memory --> Now Dynamically -->

    void push(int A){ // void push(T A)
        if(nextIndex == capacity){
            cout<<"stack is Full --> so we have increased the size of array dynamically and inserted ur element"<<endl;
            int *newData = new int [capacity*2];// T *newData = new T[capacity *2]
            for (int i = 0; i < capacity; i++){
                newData[i] = data[i];
            }
            delete[]data;
            data = newData;
            capacity = 2*capacity; // OR capacity *= 2
        }
        data[nextIndex] = A;
        nextIndex++;
    }


    int pop(){ // T pop()
        if(nextIndex == 0){
            cout<<"Stack Empty"<<endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        return (nextIndex == 0);// if nextIndex == 0 the it returns true or 1;
    }

    int top(){// T top
        if(isEmpty()){
            return 0;
        }
        else{
            return data[nextIndex-1];
        }
    }
    
};