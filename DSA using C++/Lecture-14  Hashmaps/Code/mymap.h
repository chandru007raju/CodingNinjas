#include<iostream>
#include<string>
using namespace std;
template<typename V>

class mapNode
{
    public:
        mapNode * next;
        V value;
        string key;

    mapNode(string key, V value ){
        this->key = key;
        this->value = value;
        next = NULL;
    }

    ~mapNode(){
        delete next;
    }
};

template<typename V>
class mymap
{
    private:
        void rehash()
        {
            mapNode<V>**temp = buckets;
            buckets = new mapNode<V>* [2*bucketsize] ;

            for(int i=0; i< 2*bucketsize;i++){
                buckets[i] = NULL;
            }

            int oldbucketsize = bucketsize;
            bucketsize *= 2;
            count = 0;

            for(int i = 0;i < oldbucketsize;i++){
                mapNode<V>* head = temp[i];
                while(head != NULL){
                    string key = head->key;
                    V value = head->value;
                    insert(key,value);
                    head = head->next;
                }
            }
            for(int i=0;i< oldbucketsize;i++){
                mapNode<V>* head = temp[i];
                delete head;
            }
            delete []temp;
        }

        int GetBucketIndex(string key){
            int hashIndex = 0;
            int coefficient = 1;
            for(int i = key.length()-1; i >= 0; i--){
                hashIndex += key[i] * coefficient;
                hashIndex = hashIndex % bucketsize;
                coefficient *= 37;
                coefficient = coefficient % bucketsize;
            }
            return hashIndex % bucketsize;

        }
    public:
        mapNode<V>* *buckets ; // Bucket Array;
        int count;// Number of element;
        int bucketsize; // size of Bucket;
        
    mymap()
    {
        count = 0;
        bucketsize = 5;    
        buckets = new mapNode<V>* [bucketsize];
        for(int i = 0;i < bucketsize;i++){
            buckets[i] = NULL;
        }
    }

    ~mymap()
    {
        for(int i = 0;i < bucketsize;i++){
            delete buckets[i];
        }
        delete [] buckets;
    }

    int size(){
        return count;
    }

    void insert(string key,V value)
    {
        int bucketIndex = GetBucketIndex(key);
        mapNode<V> * head = buckets[bucketIndex];
        while(head != NULL){
            if(head->key == key){
                head->value = value;
                return;
            }
            head = head->next;
        }
        head = buckets[bucketIndex];
        mapNode<V> * newNode = new mapNode<V> (key,value);
        newNode->next = head;
        buckets[bucketIndex] = newNode;
        count++;   
        double LoadFactor = (1.0 * count)/bucketsize;
        if(LoadFactor > 0.7){
            rehash();
        }
    }

    V getvalue(string key){
        int bucketIndex = GetBucketIndex(key);
        mapNode<V> * head = buckets[bucketIndex];
        while(head != NULL){
            if(head->key == key){
                return head->value;
            }
            head = head->next;
        }
        return 0;

    }

    V remove(string key){
        int bucketIndex = GetBucketIndex(key);
        mapNode<V> * head = buckets[bucketIndex];
        mapNode<V> * prev = NULL;
        while(head != NULL){
            if(head->key == key){
                if( prev == NULL){
                    buckets[bucketIndex] = head->next;
                }else{
                    prev ->next = head->next;                    
                }
                V value = head->value;
                head -> next = NULL;
                delete head;
                count--;
                return value;
            }
            prev = head;
            head = head->next;
        }  
        return 0;      
    }    
};