#include<iostream>
using namespace std;

int Arraysum(int a[],int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return a[0];
    }
    // int sum = a[0];
    // sum = sum + Arraysum(a + 1,n-1);
    // return sum;

    // OR

    return a[0] + Arraysum(a+1,n-1);


}
int main(){
    int n;
    cin>>n;

    int * a = new int [n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<Arraysum(a,n);
}