#include<iostream>
#include "Node.cpp" 
using namespace std;

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

    // Static Memory Allocation ;

    /*
    Node n1(1);

    Node* head = &n1; //Head Stores the Address of the Linked List;

    Node n2(2);
    Node n3(3);
    Node n4(4);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    */

   // Dynamic Memory Allocation;

   Node * n1 = new Node(10);
   Node * n2 = new Node(20);
   Node * n3 = new Node(30);
   Node * n4 = new Node(40);
   Node * n5 = new Node(50);

   Node * head = n1;

   n1->next = n2;
   n2->next = n3;
   n3->next = n4;
   n4->next = n5;   


   printNode(head); // Print Linked List -->

   cout<<endl;

   printIth(head,0); // Print ith Element -->
   printIth(head,1);
   printIth(head,2);
   printIth(head,3);
   printIth(head,4);

    // cout<<n1.data<<" "<<n2.data<<" "<<n3.data<<" "<<n4.data<<endl; //Static

    // OR

    // cout<<(*n1).data<<" "<<(*n2).data<<" "<<(*n3).data<<" "<<(*n4).data<<" "<<(*n5).data<<endl; //Dynamic

    return 0;

}


