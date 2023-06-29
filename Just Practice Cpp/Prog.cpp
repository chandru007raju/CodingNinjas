#include<iostream>
using namespace std;

template<typename T>
class BinaryTreeNode 
{
    public:
    int data;
    BinaryTreeNode<int> * left;
    BinaryTreeNode<int> * right;

    BinaryTreeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// PRACTICE --> PURPOSE -->
/*
class Node{
    public:
    int data;
    Node<int> * next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class LinkedList
{
    public:
    Node<int> * head; // PROPERTY --> this will have the address of Node that was first created
    Node<int> * tail; // PROPERTY --> this will have the address of Node that was  last created;

    LinkedList(int data){ // Constructor // FUNCTIONS -->
        head = NULL;
        tail = NULL;
    }

    ~LinkedList(){ // Destructor 
        delete head;
    }

};
*/

class BST
{
    private: 
    BinaryTreeNode<int> * node;

    BinaryTreeNode<int> * insert(int data,BinaryTreeNode<int>* node)
    {
        if(node == NULL){
            BinaryTreeNode<int>* newNode = new BinaryTreeNode<int> (data);
            return newNode;
        }

        if(data < node->data)
        {
            node->left = insert(data,node->left);            
        }
        else
        {
            node->right = insert(data,node->right);
        }

        return node;

    }

    BinaryTreeNode<int>* deleteData(int data,BinaryTreeNode<int>* node)
    {
        if(node == NULL){
            return NULL;
        }

        if(data < node->data)
        {
            node->left = (data,node->left);
        }
        else if( data > node->data)
        {
            node->right = deleteData(data,node->right);
        }
        else
        {
            if(node->left == NULL && node->right == NULL)
            {
                delete node;
                return NULL;
            }
            else if(node->left == NULL)
            {
                BinaryTreeNode<int>* temp = node->right;
                node->right = NULL;
                delete node;
                return temp;
            }
            else if(node->right == NULL)
            {
                BinaryTreeNode<int>* temp = node->left;
                node->left = NULL;
                delete node;
                return temp;
            }
            else
            {
                BinaryTreeNode<int> * rightMinimum = node->right;
                while(rightMinimum->left != NULL)
                {
                    rightMinimum = rightMinimum->left;
                }
                int minData = rightMinimum->data;
                node->data = minData;
                deleteData(minData,node->right);
                return node;                
            }

        }

    }

    public:
    BST(){
        node = NULL;
    }
    ~BST(){
        delete root;
    }
    insert(int data){
        return insert(data,this->node);
    }

    deleteData(int data){
        return deleteData(data,this->node);

    }


};