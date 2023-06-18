#include<iostream>
#include "Node.cpp" 
using namespace std;


Node * TakeInput(){ // head -> 1 -> 2 -> 3 
    int Num;
    cin>>Num;
    Node * head = NULL;

    while(Num != -1){    // Time  Complexity is O(n^2) --> outer loop n * inner loop for n-1 i.e equal to n --> becomes --> n^2
        Node* newNode = new Node(Num);
        if(head == NULL){
            head = newNode;
        }
        else{
            Node * temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp-> next = newNode;
        }
        cin>>Num;
    }
    return head;
}

void printNode(Node * head){ // head -> 1 -> 2 ->3
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

void printIth(Node * head,int n){ // head -> 1 -> 2 -> 3
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
   printIth(head,0); // Print ith Element -->
   printIth(head,1);
   printIth(head,2);

    return 0;

}


