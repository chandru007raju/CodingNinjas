#include<iostream>
#include "Node.cpp" 
using namespace std;

/////////

Node *deleteNode(Node *head, int pos)
{
    if(head == NULL){
        return head;
    }
    if(pos == 0){
        Node * a = head;
        head = head->next;
        delete a;
        return head;
    }
    Node * temp = head;
    int count = 0;
    while(temp != NULL && count <=  pos-2){
        temp = temp->next;
    }
    if(temp != NULL  && temp->next != NULL){
        Node * tempnext = temp->next;
        temp->next = tempnext->next;
        delete tempnext;
    }
    return head;
}

///////////

Node * DeleteAtPosition(Node * head,int pos){

    if(head ==NULL){
        return head;
    }
    
    Node * temp = head;

    if(pos == 0){
        Node *p = head;
        head = head->next;
        delete p;
        return head;
    }
    int count = 0;
    while(temp != NULL && count < pos-1){  // while Searching for the Position Make sure that the temp variable does not go out of the linked list
    // Eg --> if the list contains 5 elements and the delete position is 10 then the temp might become NULL so be carefull in hangdling this case;
        temp = temp->next;
        count++;
    }
        // if (temp != NULL && temp->next != NULL) 
        // OR
        if (temp != NULL && pos == 1)

    {
        Node *p = temp->next;
        temp->next = p->next; // is equivalent to temp -> next = temp -> next -> next;
        delete p;
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

    int pos;
    cin>>pos;

    head = DeleteAtPosition(head,pos);
    // OR
    // head = deleteNode(head,pos);

    cout<<"Linked List Elements are -->"<<endl;
    printNode(head); // Print Linked List -->
    cout<<endl;


    return 0;

}

/*
//  OUTPUT -->

0 1 2 3 4 5 -1
Linked List Elements -->
0 1 2 3 4 5
0
Linked List Elements are -->
1 2 3 4 5

*/

