#include <iostream>
#include <queue>
#include "BinaryTreeNode.h"
using namespace std;

BinaryTreeNode<int>* inputBTLevelWise(){
    int rootData;
    cout << "Enter Root: ";
    cin >> rootData;
    if (rootData == -1){
        return NULL;
    }
    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);

    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(!pendingNodes.empty()){
        BinaryTreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        int leftChild;
        cout << "Enter left child of " << front -> data << ": ";
        cin >> leftChild;
        if (leftChild != -1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(leftChild);
            front -> left = child;
            pendingNodes.push(child);
        }
        int rightChild;
        cout << "Enter right child of " << front -> data << ": ";
        cin >> rightChild;
        if (rightChild != -1){
            BinaryTreeNode<int>* child = new BinaryTreeNode<int>(rightChild);
            front -> right = child;
            pendingNodes.push(child);
        }
    }
    return root;
}
/*
void printBTree(BinaryTreeNode<int>* root){
    if (root == NULL){
        return;
    }
    cout << root -> data << ": ";
    if (root -> left != NULL){
        cout << "L" << root -> left -> data;
    }
    if (root -> right != NULL){
        cout << "R" << root -> right -> data;
    }
    cout << endl;
    printBTree(root -> left);
    printBTree(root -> right);
}
*/

void printBTreeLevelWise(BinaryTreeNode<int> * root){
    if(root == NULL){
        return;
    }

    queue<BinaryTreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0){
        BinaryTreeNode <int> * front = pendingNodes.front();
        pendingNodes.pop();

        cout<<front->data<<" : ";
        // if(front->left){
        // OR
        if(front->left != NULL){
            cout<<"L :"<<front->left->data<<" ";
            pendingNodes.push(front->left);
        }else{
            cout<<"L :"<<-1<<" ";
        }
        if(front->right){
            cout<<"R :"<<front->right->data;
            pendingNodes.push(front->right);
        }
        else{
            cout<<"R :"<<-1<<" ";
        }
        cout<<endl;

    }
}

int count(BinaryTreeNode<int> * root){
    if(root == NULL){
        return 0;
    }
/*
    int ans = 0;
    ans += count(root->left);
    ans +=count(root->right);
    return 1 + ans;
*/
    //OR
    return 1 + count(root->left) + count(root->right);
}

bool isNodePresent(BinaryTreeNode <int> * root,int key){
    
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }
    bool smallOutput1,smallOutput2;
    if(root->left){
        smallOutput1 = isNodePresent(root->left,key);
    }if(root->right){
        smallOutput2 = isNodePresent(root->right,key);
    }
    
    
    if(smallOutput1 == 1 || smallOutput2 == 1){
        return true;
    }

    return false;
}

int main(){
    BinaryTreeNode<int>* root = inputBTLevelWise();
    cout<<endl;
    // printBTree(root);
    printBTreeLevelWise(root);

    cout<<" count of Nodes :"<<count(root)<<endl;

    cout<<"Enter the Key to search for :";
    int key;
    cin>>key;
    cout<<(isNodePresent(root,key)? "true": "false");

    delete root;

    return 0;
}