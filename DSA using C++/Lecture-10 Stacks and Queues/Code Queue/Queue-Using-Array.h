using namespace std;

template <typename T>
class QueueUsingArray{
    private:
    T * data;
    int nextIndex; // rear -->
    int firstIndex; // front -->
    int size;
    int capacity;

    public:
    QueueUsingArray (int totalSize){
        data = new T [totalSize];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = totalSize;
    }

/*
        QueueUsingArrayDD (){
        data = new T [5];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = totalsize;
    }
*/

    int getSize(){
        return size;
        
    }

    bool isEmpty(){
        return (size == 0);
    }

    void enqueue(int ele){
        if(size == capacity){
            cout<<"Queue is full"<<endl;
            return;
        }
        data[nextIndex] = ele;
        // nextIndex++; // This has drawback-->
        // below is for circular queue -->
        nextIndex = (nextIndex + 1) % capacity;
        if (firstIndex == -1){
            firstIndex = 0;
        }
        size++;
    }

/*
        void enqueueDD(int ele){
        if(size == capacity){
            cout<<"Queue is full"<<endl;
            T * newData =  new T [capacity*2];
            int j = 0;
            for(int i= firstIndex;i<capacity;i++){
                newData[j] = data[i];
                j++;
            }
            for(int i=0;i<firstIndex;i++){
                newData[j] = data[i];
                j++;
            }
            delete[]data;
            data = newData;
            firstIndex = 0;
            nextIndex = capacity;
            capacity = 2*capacity;
        }
        data[nextIndex] = ele;
        nextIndex = (nextIndex + 1) % capacity;
        if (firstIndex == -1){
            firstIndex = 0;
        }
        size++;
    }
*/

    T front(){
        if (firstIndex == -1){
            cout << "Queue Empty" << endl;
            return 0;
        }
        T tempdata = data[firstIndex];
        return tempdata;
    }

    T dequeue(){
        if(isEmpty()){
            cout<<"queue is Empty"<<endl;
            return 0;
        }
        T tempdata = data[firstIndex];
        // firstIndex++; // This has drawback-->
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        if (size == 0){
            firstIndex = -1;
            nextIndex = 0;
        }
        return tempdata;
    }

};

////////----->


template<typename T>
class QueueUsingArrayD{
    private:
    T *data;
    int nextIndex;
    int firstIndex;
    int capacity;
    int size;

    public:
    QueueUsingArrayD(){
        data = new T[5];
        nextIndex = 0;
        firstIndex = -1;
        capacity = 5;
        size = 0;
    }
    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }

    T front(){
        if(size == 0){
            cout << "Queue empty" << endl;
            return 0;
        }
        return data[firstIndex];
    }

    void enqueue(T element){
        if (size == capacity){
            T *newData = new T[capacity * 2];
            int j = 0;
            for (int i = firstIndex; i < capacity; i++){
                newData[j++] = data[i];
            }
            for (int i = 0; i < firstIndex; i++){
                newData[j++] = data[i];
            }
            delete []data;
            data = newData;
            firstIndex = 0;
            nextIndex = capacity;
            capacity *= 2;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if (firstIndex == -1){
            firstIndex = 0;
        }
        size++;
    }

    T dequeue(){
        if (size == 0){
            cout << "Queue Empty" << endl;
            return 0;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        if (size == 0){
            nextIndex = 0;
            firstIndex = -1;
        }
        return ans;
    }
};




