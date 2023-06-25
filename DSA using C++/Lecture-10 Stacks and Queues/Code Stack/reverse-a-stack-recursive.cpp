#include<iostream>
#include <stack>

using namespace std;



void reverseStack(stack<int> &s1, stack<int> &s2){ // -->1   -->2    -->3 
//  3-->2-->1-->    
    if(s1.empty()){
        return;
    }
    int temp = s1.top();
    s1.pop();
    reverseStack(s1,s2);
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(temp);
    while(!s2.empty()){
    s1.push(s2.top());
    s2.pop();
    }
    return;
}

int main(){
    int size,temp;
    cin>>size;

    stack<int> s1;
    stack<int> s2;

    for(int i=0;i<size;i++){
        cin>>temp;
        s1.push(temp);
    }
     
    reverseStack(s1,s2);

    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;


}

// Working Very Well -->

/*

#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here
    if(input.empty()){
        return;
    }
    int data=input.top();
    input.pop();
    reverseStack(input,extra);
    while(!input.empty()){
        extra.push(input.top());
        input.pop();
        // extra.push(value);
    }
    input.push(data);
    while(!extra.empty()){
        input.push(extra.top());
        extra.pop();
    }
    return;
}

int main()
{
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++)
    {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty())
    {
        cout << input.top() << " ";
        input.pop();
    }
}

*/