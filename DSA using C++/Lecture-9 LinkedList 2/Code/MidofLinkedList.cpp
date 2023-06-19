
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


Node* MidPointLL(Node* head){
    Node *fast = head, *slow = head;
    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow ->next;
    }
    return slow;
}

Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newnode = new Node(data);
        if (head == NULL)
        {
            head = newnode;
            tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        cin >> data;
    }
    return head;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = takeinput();
        Node* temp = MidPointLL(head);
        cout <<temp->data<< endl;
    }

    return 0;
}