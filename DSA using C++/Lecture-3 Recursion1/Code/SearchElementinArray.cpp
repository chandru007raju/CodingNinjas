#include<iostream>
using namespace std;

bool Arraysum(int a[],int n,int k){
    if(n == 0){
        return false;
    }
    if(a[0] == k){
        return true;
    }
    return Arraysum(a+1,n-1,k);

}
int main(){
    int n,k;
    cin>>n>>k;


    int * a = new int [n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<< Arraysum(a,n,k);
}