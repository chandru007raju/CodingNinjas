#include <iostream>
#include <string>
#include <vector>

using namespace std;

class TrieNode
{

public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data)
    {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
private:
    TrieNode *root;

public:
    int count;

    Trie()
    {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool insertWord(TrieNode *root, string word)
    {
        // Base Case -->
        if (word.length() == 0)
        {
            if (root->isTerminal == true)
            {
                return false;
            }
            else
            {
                root->isTerminal = true;
                return true;
            }
        }

        // Small Calculation -->
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive Call -->
        return insertWord(child, word.substr(1));
    }

    void insertWord(string word)
    {
        if (insertWord(root, word))
        {
            this->count++;
        }
    }

    // search Pattern helper
    bool searchPattern(TrieNode *root, string word)
    {
        // Base Case -->
        if (word.size() == 0)
        {
            return true;
        }
        // small Calculation -->
        if (root->children[word[0] - 'a'] == NULL)
        {
            return false;
        }
        // recursive call -->
        return searchPattern(root->children[word[0] - 'a'], word.substr(1));
    }
    // Main Search Function
    bool searchPattern(string word)
    {
        return searchPattern(root, word);
    }

    bool PatternMatching(vector<string> vect, string pattern)
    {
        for (int i = 0; i < vect.size(); i++)
        {
            string word = vect[i]; 
            for (int j = 0; j < word.size(); j++)// (dimple) --> inserted in 1st iteration . then d (imple) is inserted in 2nd iteration. then di (mple) is inserted in 3 rd iteration --> and so on  -->
            {
                insertWord(word.substr(j));
            }
        }
        return searchPattern(pattern);
    }
};

int main(){
    Trie t;

    int n;
    cin>>n;

    string pattern;
    vector<string> vect;

    for(int i = 0 ;i < n ;i++){
        string word;
        cin>> word;

        vect.push_back(word);
    }
    cin>> pattern;

    cout<<(t.PatternMatching(vect,pattern) ? "true" : " false");

    return 0;
}
