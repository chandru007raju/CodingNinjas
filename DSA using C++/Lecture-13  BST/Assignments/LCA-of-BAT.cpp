#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
    ~BinaryTreeNode()
    {
        if (left)
            delete left;
        if (right)
            delete right;
    }
};

BinaryTreeNode<int> *takeInput()
{
    int rootData;

    cin >> rootData;
    if (rootData == -1)
    {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *currentNode = q.front();
        q.pop();
        int leftChild, rightChild;

        cin >> leftChild;
        if (leftChild != -1)
        {
            BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode->left = leftNode;
            q.push(leftNode);
        }

        cin >> rightChild;
        if (rightChild != -1)
        {
            BinaryTreeNode<int> *rightNode =
                new BinaryTreeNode<int>(rightChild);
            currentNode->right = rightNode;
            q.push(rightNode);
        }
    }

    return root;
}

int getLCA(BinaryTreeNode<int> *root, int val1, int val2)
{
    if (root == NULL)
    {
        return -1;
    }
    else if (root->data == val1 || root->data == val2)
    {
        return root->data;
    }
    else if (root->data < val1 && root->data < val2)
    {
        return getLCA(root->right, val1, val2);
    }
    else if (root->data > val1 && root->data > val2)
    {
        return getLCA(root->left, val1, val2);
    }
    int left_answer = getLCA(root->left, val1, val2);
    int right_answer = getLCA(root->right, val1, val2);
    if (left_answer == -1 && right_answer != -1)
    {
        return right_answer;
    }
    else if (left_answer != -1 && right_answer == -1)
    {
        return left_answer;
    }
    else if (left_answer != -1 && right_answer != -1)
    {
        return root->data;
    }
    else if (left_answer == -1 && right_answer == -1)
    {
        return -1;
    }
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    int a, b;
    cin >> a >> b;
    cout << getLCA(root, a, b);
    delete root;
}

/***************************************************************************/

//     PRACTICE ---->

int getLCA(BinaryTreeNode<int>* root,int k1,k2)
{
     if(root == NULL)
     {
        return -1;
     }
      if(root->data == k1 || root->right == k2)
     {
        return root->data;
     }
     else if(root->data >  k1 && root->data > k2)
     {
        return getLCA(root->left,k1,k2);
     }
     else if(root->data < k1 && root->data < k2)
     {
        return getLCA(root->right,k1,k2);
     }

     int smallAns1 = getLCA(root->left,k1,k2);
     int smallAns2 = getLCA(root->right,k1,k2);

     if(smallAns1 != -1 && smallAns2 == -1)
     {
        return smallAns1;
     }
     else if(smallAns1 == =-1 && smallAns2 != -1){
        return smallAns2;
     }
     else if(smallAns1 == -1 && smallAns2 == -1){
        return -1;
     }else if(smallAns1 != -1 && smallAns2 != -1){
        return root->data;
     }

}