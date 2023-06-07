#include<iostream>
using namespace std;

int Arraysum(int a[],int n,int k){
    if(n == 0){
        return -1;
    }
    int ans = Arraysum(a+1,n-1,k);
    if(a[0] == k && ans == -1){
        return 0;
    }    
    if(ans == -1){
        return ans;  
    }else{
        return ans + 1;
    }
    

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