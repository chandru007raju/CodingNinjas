#include<iostream>
#include<vector>
#include<queue>
#include "TreeNode.h"

using namespace std;

TreeNode <int> * takeInputLevelwise(){
    int rootData;
    cout<<"Enter Root Data "<<endl;
    cin>>rootData;
    TreeNode<int> * root = new TreeNode <int> (rootData);

    queue<TreeNode<int>*> pendingNodes;

    pendingNodes.push(root);
    while(!pendingNodes.empty()){
        TreeNode<int>* front = pendingNodes.front(); //Statically allocated data that gets deleted after this iteration
        pendingNodes.pop();

        cout<<"Enter the No of childrens in"<<front->data<<endl;
        int childNum;
        cin>>childNum;

        for(int i=0;i<childNum;i++){
            int childData;
            cout<<"Enter the "<<i<< "th child "<<front->data<<endl;
            cin>>childData;

            TreeNode<int> * child = new TreeNode <int> (childData);
            front->children.push_back(child); // Push this to vector so that this node is connected with the root
            pendingNodes.push(child); // push this node to the stack;
        }
    }
    return root;
}

TreeNode<int>* takeInput(){

    int rootData,n;
    cout<<"Enter Root Data :"<<endl;
    cin>>rootData;

    TreeNode<int> * root = new TreeNode<int> (rootData);

    cout<<"Enter No of children of :"<<rootData<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        TreeNode<int>*child = takeInput();
        root->children.push_back(child);
    }
    return root;  
}




void printTree(TreeNode<int> * root){

    if(root == NULL){
        return ;
    }

    cout<<root->data<<" :";
    for(int i=0;i<root->children.size();i++){
        cout<<(root->children[i]->data)<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++){
        printTree(root->children[i]);
    }
}
/*
output-->

77 :1,2,3,4,
1 :33,44,55,
33 :
44 :
55 :
2 :
3 :
4 :
*/

void printTreeLevelWise(TreeNode <int> * root){
    if(root == NULL){
        return;
    }
    queue<TreeNode<int>*> q1;
    
    q1.push(root);  

    while(!q1.empty()){
        TreeNode<int>* front = q1.front();
        q1.pop();
        cout<<front->data<<" :";
            for(int i=0;i<front->children.size();i++){
            cout<<front->children[i]->data<<",";
            }
            cout<<endl;
            for(int i=0;i<front->children.size();i++){
                q1.push(front->children[i]);
            }
            
    }

}
/*
output --> 

77 :1,2,3,4,
1 :33,44,55,
2 :
3 :
4 :
33 :
44 :
55 :

*/

int main(){

/*
    TreeNode <int> * root = new TreeNode<int> (10);
    TreeNode <int> * node1 = new TreeNode<int> (20);
    TreeNode <int> * node2 = new TreeNode<int> (30);
    root->children.push_back(node1);
    root->children.push_back(node2);

*/
    TreeNode <int>* root = takeInputLevelwise();
    printTree(root);
    // printTreeLevelWise(root);


    //TODO delete a tree
}