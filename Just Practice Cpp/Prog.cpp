#include <iostream>
#include <queue>
#include <climits>
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
        {
            delete left;
        }
        if (right)
        {
            delete right;
        }
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

#include <iostream>
#include <climits>

// min // max // height // isBST 

#define GetPair pair<pair<int,int>,pair<int,bool>>
#define mini first.first
#define maxi first.second
#define hi second.first
#definr isBST second.second

int helper(BinaryTreeNode<int>*root,int sum)
{
    if(!root)
    {
        return sum;
    }
    sum = helper(root->right,sum);
    sum += root->data;
    root->data = sum;
    sum = helper(root->left,sum);    
}



void replaceGreaterNodes(BinaryTreeNode<int>* root)
{
    helper(root,0);
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    replaceGreaterNodes(root);
    delete root;
}
