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

#define minimum first.first
#define maximum first.second
#define height second.first
#define isBST second.second
#define getPair pair<pair<int, int>, pair<int, bool>>

getPair largestBSTSubtreeHelper(BinaryTreeNode<int> *root)
{
    getPair answer;
    if (!root)
    {
        answer.minimum = INT_MAX;
        answer.maximum = INT_MIN;
        answer.height = 0;
        answer.isBST = true;
        return answer;
    }

    getPair left_part = largestBSTSubtreeHelper(root->left);
    getPair right_part = largestBSTSubtreeHelper(root->right);

    int final_minimum = min(root->data, min(left_part.minimum, right_part.minimum));
    int final_maximum = max(root->data, max(left_part.maximum, right_part.maximum));
    bool final_BST = left_part.isBST && right_part.isBST && root->data < right_part.minimum && root->data > left_part.maximum;
    int final_height;
    if (final_BST)
    {
        final_height = 1 + max(left_part.height, right_part.height);
    }
    else
    {
        final_height = max(left_part.height, right_part.height);
    }

    getPair output;
    output.minimum = final_minimum;
    output.maximum = final_maximum;
    output.height = final_height;
    output.isBST = final_BST;
    return output;
}

int largestBSTSubtree(BinaryTreeNode<int> *root)
{
    return largestBSTSubtreeHelper(root).height;
}

int main()
{
    BinaryTreeNode<int> *root = takeInput();
    cout << largestBSTSubtree(root);
    delete root;
}

/************************************************************************/

// PRACTICE  -----> 

/*

#include<iostream>
#include<climits>

#define mini first.first
#define maxi first.second
#define hi second.first
#define isBS second.second

#define GetPair pair<pair<int,int>,pair<int,bool>>

GetPair helper(BinaryTreeNode<int>* root)
{
    if(root == NULL)
    {
        GetPair ans;
        p.mini = INT_MAX;
        p.maxi = INT_MIN;
        p.hi = 0;
        p.isBS = true;

        return ans;
    }

    GetPair Left = helper(root->left);
    GetPair Right = helper(root->right);

    GetPair Put;
    put.mini = min(root->data, min(Left.mini,Right.mini));
    put.maxi = max(root->data,max(Left.maxi,Right.maxi));
    put.isBS = Left.maxi < root->data && Right.mini >= root->data && Left.isBS && Right.isBS;

    if(put.isBS)
    {
        put.hi = 1 + max(Left.hi,Right.hi);

    }else
    {
        put.hi = max(Left.hi,Right.hi);
    }
    
    return Put;
}

    int GetLargestHeight(BinaryTreeNode<int>* root)
    {
        return helper(root).height;
    }

    int main()
    {
        BinaryTreeNode<int> *root = takeInput();
        cout << GetLargestHeight(root);
        delete root;
    }

*/

