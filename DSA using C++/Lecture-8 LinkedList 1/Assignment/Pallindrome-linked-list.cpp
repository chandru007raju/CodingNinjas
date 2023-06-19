
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

bool isPaalindrome(Node *head)
{
    if (head == NULL)
    {
        return true;
    }
    Node *fast = head, *slow = head; // MidPoint Of Linked List -->
    while (fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    Node *secondHalf = slow->next; // 1 --> 2 -->> 3 --> 4 
    slow->next = NULL;

    Node *pre = NULL, *curr = secondHalf, *nex = secondHalf;

    while (curr != NULL) // Reverse Function -->
    {
        nex = nex->next;
        curr->next = pre;
        pre = curr;
        curr = nex;
    }
    secondHalf = pre;
    while (head != NULL && secondHalf != NULL)
    {
        if (head->data != secondHalf->data)
        {
            break;
        }
        head = head->next;
        secondHalf = secondHalf->next;
    }

    if ((head == NULL || head->next == NULL) && secondHalf == NULL)
    {
        return true;
    }
    return false;
}

bool isPalindrome(Node * head){
    
    if(head == NULL){
        return true;
    }
    Node *fast = head, *slow = head;
    while(fast->next != NULL && fast->next->next != NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    Node *secondHalf = slow ->next;
    slow->next = NULL;

    Node *pre = NULL, *cur = secondHalf, *nex = secondHalf;

    while(cur != NULL){
        nex = nex->next;
        cur->next = pre;
        pre = cur;
        cur = nex;
    }
    secondHalf = pre;

    while(head !=NULL  && secondHalf != NULL){
        if(head->data != secondHalf->data){
            break;
        }
        head = head->next;
        secondHalf = secondHalf->next;
    }
    if ((head == NULL || head->next == NULL) && secondHalf == NULL)
    {
        return true;
    }
    return false;
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
        bool ans = isPalindrome(head);

        if (ans)
            cout << "true";
        else
            cout << "false";

        cout << endl;
    }

    return 0;
}