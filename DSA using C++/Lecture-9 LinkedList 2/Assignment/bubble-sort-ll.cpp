
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

int length(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    return length(head->next) + 1;
}

Node *bubbleSort(Node *head)
{
    int n = length(head);
    for (int i = 0; i < n; i++)
    {
        Node *prev = NULL, *curr = head, *nxt = NULL;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (curr->data > curr->next->data)
            {
                if (prev == NULL)
                {
                    nxt = curr->next;
                    head = nxt;
                    curr->next = nxt->next;
                    nxt->next = curr;
                    prev = nxt;
                }
                else
                {
                    nxt = curr->next;
                    prev->next = nxt;
                    curr->next = nxt->next;
                    nxt->next = curr;
                    prev = nxt;
                }
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
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
    Node *head = takeinput();
    head = bubbleSort(head);
    print(head);
}