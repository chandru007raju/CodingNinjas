#include<iostream>
#include "Node.cpp" 
using namespace std;

int LengthOfLL(Node * head){ // Length of linked List -->
    int count = 0;
    if(head ==NULL){
        return 0;
    }
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}


Node * TakeInput(){ // head -> 1 -> 2 -> 3 // take Input Optimised
    int Num;
    cin>>Num;
    Node * head = NULL;
    Node * tail = NULL;

    while(Num != -1){    // Time Complexity O(n)
        Node* newNode = new Node(Num);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;
        }
        cin>>Num;
    }
    return head;
}

void printNode(Node * head){ // head -> 1 -> 2 ->3 // Print Linked List
    Node * temp;
    temp = head;
    if(head == NULL){
        return;
    }
    while(temp != NULL){
        cout<<temp ->data <<" ";
        temp = temp->next;
    }
}

void printIth(Node * head,int n){ // head -> 1 -> 2 -> 3 // Print i Th position in Linked list
    Node* temp = head;
    int count = 0;
    if(head == NULL){
        return;
    }
    while(count<n && temp != NULL){
        temp = temp->next;
        count++;
    }
    cout<<temp->data<<endl;

}


int main(){
 
    Node * head = TakeInput();

    cout<<"length of Linked List is :";
    cout<<LengthOfLL(head)<<endl;


    cout<<"Linked List Elements -->"<<endl;
    printNode(head); // Print Linked List -->
    cout<<endl;

    return 0;

}


