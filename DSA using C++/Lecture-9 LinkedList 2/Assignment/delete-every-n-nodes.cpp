
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


/*
Node *skipMdeleteN(Node *head, int M, int N)
{
	Node * temp = new Node(-1);
    Node * prev = temp ;
    prev->next = head;
    while (head != NULL){
        for(int i = 0; (i<M) && (head!=NULL) ; i++){
            prev = head;
            head = head->next;
        }
        for(int i = 0 ; (i<N)&& (head!=NULL) ; i++){
			head = head->next;	
        }
        prev ->next = head;
    }
    return temp->next;
}

*/

Node *skipMdeleteN(Node *head, int M, int N){
	//corner case
    if(!M) return NULL;  
    //OR
    // if(M== 0) return NULL;     
    Node *curr = head;
    Node *ptr;
    int count = 0;
    while(curr) {
        
        //travese the M nodes
        for(count = 1; count < M and curr; count++) {
        // OR 
        // for(count = 1; count < M && curr; count++) {

            curr = curr -> next;
        }
        
        if(!curr) {
            return head;
        }
        ptr = curr -> next;
        
        //delete N nodes and move to the node after hence >= sign
        for(count = 1; count <= N and ptr; count++) {
            ptr = ptr -> next;
        }
        
        curr -> next = ptr;
        curr = ptr;
    }
    return head;
}

/*
// Delete every N nodes
Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    if(head==NULL){
        return head;
    }
    if(M==0){
        return NULL;
    }
    Node* temp=head;
    while(temp!=NULL){
        int mCount=0;
        while(mCount<M-1 && temp!=NULL){
            temp=temp->next;
            mCount++;
        }
        if(temp==NULL){
            return head;
        }
        Node *nEnd=temp;
        int nCount=0;
        while(nCount<=N && temp!=NULL){
            temp=temp->next;
            nCount++;
        }
        Node* newEndStart=temp;
        nEnd->next=newEndStart;
        
        
    }
    return head;
}

*/


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
        int m, n;
        cin >> m >> n;
        head = skipMdeleteN(head, m, n);
        print(head);
    }
    return 0;
}

//Practice Twice -->

// Node *skipMdeleteN(Node *head, int M, int N){
//     if(!M) return NULL;
//     Node *curr = head;
//     Node *ptr;
//     int count = 0;
//     while(curr){

//         for(count = 1;count < M and curr;count++){
//             curr = curr->next;
//         }

//         if(!curr){
//             return head;
//         }
//         ptr = curr-> next;

//         for(count = 1;count <= N and ptr;count++){
//             ptr = ptr->next;
//         }
//         curr->next = ptr;
//         curr = ptr;
//     }
//     return head;
// }

// --> 1--> 2 --> 3 --> 4 --> 5--> 6 --> 7 --> 8--> 9  -------> assume input is 2 --> and --> 3
/*
//Practice Thrice -->

Node *skipMdeleteN(Node *head, int M, int N){
    if(head == NULL){
        return NULL;
    }
    if(M == 0){
        return head;
    }
    Node *curr = head;
    Node *ptr = NULL;
    while(curr != NULL){ // OR while(curr){} // this will work fine ;
        int count = 0;
        for(count = 1;count < M and curr;count++){
            curr = curr->next;
        }
        if(curr == NULL){
            return head;
        }
        ptr = curr->next;

        for(count = 1;count<= N and ptr;count++){
            ptr = ptr->next; // here we have made changes to the linked list itself so return the head the LL will woek fine ;
        }
        curr->next = ptr;
        curr = ptr;
    }
    return head;
}

*/


