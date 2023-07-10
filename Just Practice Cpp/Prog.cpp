#include <iostream>
#include <vector>
#include<queue>
using namespace std;

vector<int> mergekSortedArrays(vector<vector<int>*> input){
    
    priority_queue< pair<int,pair<int,int>> ,vector< pair<int,pair<int,int>> >,greater< pair<int,pair<int,int>> > > pq;

    for(int i = 0; i < input.size();i++){
        pair<int,pair<int,int>> p1;
        p1.first = input[i]->at(0); // value at zero index of the current array;
        p1.second.first = i; // arrNo --> that is first array or second or third ;
        p1.second.second = 0; // index at current array; 

        pq.push(p1);        
    }
    vector<int> ans;
    while(!pq.empty()){
        pair<int,pair<int,int>> temp = pq.top();
        pq.pop();

        ans.push_back(temp.first);
        
        int arrNo = temp.second.first;
        int Index = temp.second.second + 1;

        if(Index < input[arrNo]->size()){
            
            temp.first = input[arrNo]->at(Index);
            temp.second.second = Index;
            pq.push(temp);
        }
    }
    return ans;
}

int main()
{

    int k;
    cin >> k;

    vector<vector<int> *> input;

    for (int i = 1; i <= k; i++)
    {
        int size;
        cin >> size;

        vector<int> *current = new vector<int>();
        for (int j = 0; j < size; j++)
        {
            int element;
            cin >> element;
            current->push_back(element);
        }

        input.push_back(current);
    }

    vector<int> ans = mergekSortedArrays(input);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
