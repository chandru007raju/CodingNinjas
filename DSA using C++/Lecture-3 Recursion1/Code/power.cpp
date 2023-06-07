#include<iostream>
using namespace std;

int power(int x,int n){
    int ans = 1;
    if(n == 0){
        return ans;
    }
    ans =  x * power(x,n-1);
    return ans;
}

int main (){
    int x;
    cin>>x;

    int n;
    cin>>n;

    cout<<power(x,n);
}
