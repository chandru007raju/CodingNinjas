
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

/* workes for non sorted array also
Node *removeDuplicates(Node *head)
{
    //Write your code her
    Node *ptr1 = head, *ptr2 = NULL;
    while (ptr1 != NULL && ptr1 -> next != NULL){
        ptr2 = ptr1;
        while (ptr2 -> next != NULL){
            if (ptr2 -> next -> data == ptr1 -> data){
                Node * p = ptr2 -> next;
                ptr2 -> next = ptr2 -> next -> next;
                delete p;
            }
            else{
                ptr2 = ptr2 -> next;
            }
        }
        ptr1 = ptr1 -> next;
    }
    return head;
}
*/

// Node *removeDuplicates(Node *head)
// {
//     Node *ptr1 = head, *ptr2 = NULL;
//     while (ptr1 != NULL && ptr1->next != NULL)
//     {
//         ptr2 = ptr1->next;
//         while (ptr2 != NULL && ptr2->data == ptr1->data)
//         {
//             Node *p = ptr2;
//             ptr2 = ptr2->next;
//             delete p;
//         }
//         ptr1->next = ptr2;
//         ptr1 = ptr2;
//     }
//     return head;
// }

Node * removeDuplicates(Node * head){
    Node * t1 = head;
    Node * t2 = NULL;
    while(t1 != NULL && t1->next != NULL){
        t2 = t1->next;

        while(t2 != NULL && t1->data == t2->data){ // writing Your check properly is very important --> their Order also matters -->
            Node * temp = t2;
            t2 = t2->next;
            delete temp;
        }
        t1->next = t2;
        t1 = t2;
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

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = takeinput();
        head = removeDuplicates(head);
        print(head);
    }
    return 0;
}