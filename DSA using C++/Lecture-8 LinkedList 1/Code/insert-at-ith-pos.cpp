#include<iostream>
#include "Node.cpp" 
using namespace std;

Node * InsertAtPosition(Node * head,int pos,int element){
    
    Node * newNode = new Node(element);
    int count = 0;
    if(pos == 0){
        newNode -> next = head;
        head = newNode;
        return head;
    }

    Node * temp = head;
    while(temp != NULL && count < pos-1){ // head -> 1 --> 2 --> 3
        temp = temp->next;
        count++;
    }
    if(temp != NULL){
        newNode->next = temp->next;
        temp -> next = newNode;
    }
    

    return head;
    
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

    cout<<"Linked List Elements -->"<<endl;
    printNode(head); // Print Linked List -->
    cout<<endl;

    int pos,element;
    cin>>pos>>element;

    head = InsertAtPosition(head,pos,element);

    cout<<"Linked List Elements are -->"<<endl;
    printNode(head); // Print Linked List -->
    cout<<endl;


    return 0;

}


