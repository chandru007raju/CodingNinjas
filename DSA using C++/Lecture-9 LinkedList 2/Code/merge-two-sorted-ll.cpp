
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

// Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
// {
//     //Write your code here
//     if (head1 == NULL)
//     {
//         return head2;
//     }
//     else if (head2 == NULL)
//     {
//         return head1;
//     }
//     /* No need of this condition it is already covered in above condition
//    else if (head1 == NULL && head2 == NULL){
//         return head1;
//     }
//     */
//     Node *fh = NULL, *ft = NULL, *h1 = head1, *h2 = head2;
//     if (h1->data < h2->data)
//     {
//         fh = ft = h1;
//         h1 = h1->next;
//     }
//     else
//     {
//         fh = ft = h2;
//         h2 = h2->next;
//     }
//     while (h1 != NULL && h2 != NULL)
//     {
//         if (h1->data < h2->data)
//         {
//             ft->next = h1;   // attach h1 to finaltail
//             ft = h1;   // make this  tail pointer to finalhead--> last element
//             h1 = h1->next;
//         }
//         else
//         {
//             ft->next = h2;   // attach h1 to finaltail
//             ft = h2;   // make this  tail pointer to finalhead --> last element
//             h2 = h2->next;
//         }
//     }
//     if (h1 != NULL)
//     {
//         ft->next = h1;
//     }
//     else
//     {
//         ft->next = h2;
//     }
//     return fh;
// }


Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    if(head1 == NULL){
        return head2;
    }
    else if(head2 == NULL){
        return head1;
    }

    Node *fh = NULL,*ft = NULL;
    Node *h1 = head1,*h2 = head2;
    if(h1->data <h2->data){
        fh = ft = h1;
        h1 = h1->next;
    }else{
        fh = ft = h2;
        h2 = h2->next;

    }

    while(h1 != NULL && h2 != NULL){
        if(h1->data <h2->data){
            ft->next = h1;
            ft = h1;
            h1 = h1->next;
        }else{
            ft->next = h2;
            ft = h2;
            h2 = h2->next;
        }
    }
    if(h1 != NULL){
        ft->next = h1;
    }else{
        ft->next = h2;
    }
    return fh;
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
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head1 = takeinput();
        Node *head2 = takeinput();
        Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
        print(head3);
    }
    return 0;
}