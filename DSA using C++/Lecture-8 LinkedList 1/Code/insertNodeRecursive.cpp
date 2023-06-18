
#include <iostream>

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

using namespace std;

Node * insert (Node * head,int i,int data){
    if(head == NULL){
        if(i == 0){
            Node * newNode  = new Node (data);
            head = newNode;
        }
        return head;
    }
    Node * temp = insert(head-> next,i-1,data);
    head->next = temp;

    if(i == 0){
        Node * newNode = new Node (data);  
        newNode->next = head;          
        head = newNode;
    }
    return head;
        
}

// Node *insertNode(Node *head, int i, int data)
// {
//     if (head == NULL)
//     {
//         if (i == 0)
//         {
//             Node *newNode = new Node(data);
//             return newNode;
//         }
//         return head;
//     }

//     Node *temp = insertNode(head->next, i - 1, data);
//     head->next = temp;
//     if (i == 0)
//     {
//         Node *newNode = new Node(data);
//         newNode->next = head;
//         head = newNode;
//     }
//     return head;
// }

Node * insertNode(Node * head,int i,int data){
    if(head == NULL){
        if(i == 0){
            Node * newNode = new Node(data);
            return newNode;
        }
        return head;
    }
    Node * temp = insertNode(head -> next,i-1,data);
    head -> next = temp;

    if(i == 0){
        Node * newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    return head;

}

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = takeinput();
        int pos, data;
        cin >> pos >> data;
        head = insertNode(head, pos, data);
        //OR
        // head = insert(head, pos, data);

        print(head);
    }
}

/*
1. OutPut --> 

1
1 2 3 4 5 6 7 -1
0 77
77 1 2 3 4 5 6 7


2. OutPut -->

2
5 4 3 2 1 -1
0 0
0 5 4 3 2 1
1 2 3 4 5 6 7 8 -1
8 9
1 2 3 4 5 6 7 8 9

*/

 