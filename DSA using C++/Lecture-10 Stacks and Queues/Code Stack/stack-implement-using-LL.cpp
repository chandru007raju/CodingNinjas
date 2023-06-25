#include<iostream>
using namespace std;

template<typename T>
class Node{

public:
    T data;
    Node<T> * next;


    Node(T data){
        this->data = data;
        this->next = NULL;
    }
};

template <typename T>
class StackLLT{
    private:
    Node<T> * head;
    int size;

    public:
    StackLLT(){
        head = NULL;
        size = 0;
    }

    void push(T element){
        Node<T> *temp = new Node<T>(element);
        temp -> next = head;
        head = temp;
        size++;
    }

T pop(){
    if(head == NULL){
        return 0;
    }
    Node<T> * temp = head;
    T tempdata = head->data;
    head = head->next;
    size--;
    delete temp;
    return tempdata;
}

T top(){
    if(head == NULL){
        return 0;
    }
    T tempdata = head->data;
    return tempdata;
}

int getSize(){
        return size;
    }

bool isEmpty(){
        return head == NULL;
    }
    
};