#include<iostream>
using namespace std;

int sumof(int n){ // 30 -->3 (recursion will do) |0 we will do
    if(n == 0){
        return 0;
    }
    if(n <= 9){
        return n;
    }
    int ans = sumof(n/10); //--> 30/10 = 3(remainder)
    int small = n%10;
    return ans + small;
}

int main(){
    int n;
    cin>>n;

    cout<<sumof(n);
}