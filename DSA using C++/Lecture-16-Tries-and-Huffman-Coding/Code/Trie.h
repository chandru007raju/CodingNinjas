#include<string>
#include "TrieNode.h"
using namespace std;

class Trie
{
    private:
    Trie * root;

    void insertWord(TrieNode * root,string word){ // d i m p l e -->

        //BASE CASE --> 
        if(word.size() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // SMALL CALCULATION -->
        int index = word[0] - 'a';
        TrieNode* child ;
        if(root->children[index]  == NULL)
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        else
        {
            child = root->children[index];
        }
        // RECURSIVE CALL -->
        insertWord(child,word.substr(1));

    }

// Similar -->
/*  
    void insertWord(TrieNode* root, string word){
        if (word.size() == 0){
            root -> isTerminal = true;
            return;
        }
        TrieNode* child;
        int index = word[0] - 'a';
        if (root -> children[index] != NULL){
            child = root -> children[index];
        }
        else{
            child = new TrieNode(word[0]);
            root -> children[index] = child;
        }

        insertWord(child, word.substr(1));
    }
*/

    bool searchWord(TrieNode* root,string word){
        // BASE CASE -->
        if(word.size() == 0){
            if(root->isTerminal == true){
                return true;
            }
            else
            {
                return false;
            }
        }
        // SMALL CALCULATION -->
        int index = word[0] - 'a';
        TrieNode * child;
        if(root->children[index] == NULL)
        {
            return false;
        }
        else
        {
            child = root->children[index];
        }
        // RECURSIVE CALL -->
        return searchWord(child,word.substr(1));
    }

// Similar -->
/*
    bool search(TrieNode* root, string word){
        if (word.size() == 0){
            //We can reduce the code length by using this it will work same as if - else
            return root -> isTerminal;
        }
        if (root -> children[word[0] - 'a'] == NULL){
            return false;
        }
        
        return search(root -> children[word[0] - 'a'], word.substr(1));
    }
*/

    void removeWord(TrieNode * root,string word)
    {
        // BASE CASE -->
        if(word.size() == 0)
        {
            root->isTerminal = false;
            return ;
        }

        // SMALL CALCULATION -->
        int index = word[0] - 'a';
        TrieNode * child;
        if(root->children[index] == NULL){
            return;
        }
        else
        {
            child = root->children[index];
        }

        //BASE CASE -->
        removeWord(child,word.substr(1));

        //Remove Child node if it is useless -->
        if(child->isTerminal == false){
            for(int i = 0; i < 26;i++){
                if(child->children[i] != NULL){
                    return;
                }
            }
            delete child;
            root->children[index] = NULL;
        }
    }

//Similar -->
/*
    void removeWord(TrieNode* root, string word){
        if (word.size() == 0){
            root -> isTerminal = false;
            return;
        }

        int index = word[0] - 'a';
        TrieNode* child;
        if (root -> children[index] != NULL){
            child = root -> children[index];
        }
        else{
            //Word not found
            return;
        }
        removeWord(child, word.substr(1));

        //Remove Child node if it is useless
        if (child -> isTerminal == false){
            for (int i = 0; i < 26; i++){
            if (child -> children[i] != NULL){
                return;
            }
        }
            root -> children[index] = NULL;
            delete child;
        }
    }
*/



    public:
    Trie(){
        root = new TrieNode('\0');
    }

    void insertWord(string word)
    {
        insertWord(root,word);
    }

    bool searchWord(string word){
        return searchWord(root,word);
    }

    void removeWord(string word){
        removeWord(root,word);
    }
};