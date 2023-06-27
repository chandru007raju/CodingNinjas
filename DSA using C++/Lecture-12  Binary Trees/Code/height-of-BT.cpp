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

int getHeightBT(BinaryTreeNode<int> * root){
    if(root == NULL){
        return 0;
    }
    int leftHeight = getHeightBT(root->left);
    int rightHeight = getHeightBT(root->right);
    if (leftHeight > rightHeight)
    {
        return leftHeight + 1;
    }

    return rightHeight + 1;

}


int main(){
    BinaryTreeNode<int>* root = inputBTLevelWise();
    cout<<endl;
    printBTreeLevelWise(root);

    cout<<"Height of BT :"<< getHeightBT(root);

    delete root;

    return 0;
}

/*
int getHeight(TreeNode<int> *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int h = 0;
    for (int i = 0; i < root->children.size(); i++)
    {
        int childH = getHeight(root->children[i]);
        if (childH > h)
        {
            h = childH;
        }
    }
    return h + 1;
}
*/