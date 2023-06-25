using namespace std;
template <typename T>
class Node{
    public:
    T data;
    Node<T> * next;

    Node(T data){
        this->data  = data;
        next = NULL;
    }
};

template <typename T>
class Queue{
    private:
    Node<T>* head;
    Node<T>* tail;
    int size;

    public:
    Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
    }

    int getsize(){
        return size;
    }

    void enqueue(T data){
        Node<T> *newNode = new Node<T> (data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            size++;
            return;
        }
        tail->next = newNode;
        tail = newNode;
        size++;
    }

    T dequeue(){
        if(head == NULL){
            cout<<"que is Empty"<<endl;
            return 0;
        }
        Node<T> * temp = head;
        T ans = head->data;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }

    T front(){
        if(head == NULL){
            cout<<"que is Empty"<<endl;
            return 0;
        }
        return head->data;
    }

    bool isEmpty(){
        return (size == 0);
    }
    

};