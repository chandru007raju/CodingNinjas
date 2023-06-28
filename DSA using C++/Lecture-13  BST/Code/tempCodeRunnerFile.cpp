vector<int> * getRootToNodePath(BinaryTreeNode<int> * root,int key){
    if(root == NULL){
        return NULL;
    }

    if(root->data == key){
        vector<int> * output = new vector<int> ();
        output->push_back(root->data);
        return output; // this is actually returning the address of output --> IMP 
    }

    vector<int> * leftans = getRootToNodePath(root->left,key);
    if(leftans != NULL){ // that means there is an address present in leftans;
        leftans->push_back(root->data);
        return leftans;
    }

    vector<int> * rightans = getRootToNodePath(root->right,key);
    if(rightans != NULL){ // that means there is an address present in leftans;
        rightans->push_back(root->data);
        return rightans;
    }

    return NULL; // if still there is No data fount in the Node Then return NULL

}