
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

Node *evenAfterOdd(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *oh = NULL, *eh = NULL, *ot = NULL, *et = NULL;
    while (head != NULL)
    {
        if (head->data % 2 == 0)
        {
            if (eh == NULL)
            {
                eh = head;
                et = head;
            }
            else
            {
                et->next = head;
                et = head;
            }
        }
        else
        {
            if (oh == NULL)
            {
                oh = head;
                ot = head;
            }
            else
            {
                ot->next = head;
                ot = head;
            }
        }
        head = head->next;
    }

    if (oh == NULL)
    {
        return eh;
    }
    else
    {
        ot->next = eh;
    }

    if (eh != NULL)
    {
        et->next = NULL;
    }
    return oh;
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
        head = evenAfterOdd(head);
        print(head);
    }
    return 0;
}


// Practice Twice -->
/*
Node *evenAfterOdd(Node *head){ // 1 --> 2 --> 3 --> 4 -->5 
    if(head == NULL){
        return head;
    }

    Node *Oddh = NULL, *Oddt = NULL,*Evenh = NULL,*Event = NULL;
    while(head != NULL){
        if(head->data %2 == 0){

            if(Evenh == NULL){
                Evenh = Event = head;
            }
            else{
                Event->next = head;
                Event = head;
            }
        }
        else{
            if(Oddh == NULL){
                Oddh = Oddt = head;
            }
            else{
                Oddt->next = head;
                Oddt = head;
            }

        }
        head = head-> next;
    }
        if(Oddh == NULL){
            return Evenh;
        }
        else{
            Oddt->next = Evenh;
        }
        if(Evenh != NULL){
            Event->next = NULL;
        }
        return Oddh;
}
*/
