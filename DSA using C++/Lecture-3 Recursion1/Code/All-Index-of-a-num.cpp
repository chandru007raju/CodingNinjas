#include<iostream>
using namespace std;

int Arraysum(int a[],int n,int k,int arr[]){
    if(n == 0){
        return 0;
    }
    int ans = Arraysum(a+1,n-1,k,arr);
    for(int i = 0; i < ans; i++) arr[i]++;

    if(a[0] == k){
        for(int i = ans -1;i >= 0;i--){
            arr[i+1]= arr[i];
        }
        arr[0] = 0;
        return ans + 1;        
    }
    return ans;    
    

}
int main(){
    int n,k;
    cin>>n>>k;


    int * a = new int [n];
    int arr[10];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<< Arraysum(a,n,k,arr);
}