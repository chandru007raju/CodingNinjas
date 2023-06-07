#include<iostream>
using namespace std;

int count (int n){

if(n <= 9){
    if(n == 0){
        return 1;
    }else{
        return 0;
    }
}
int ans = count (n/10); //recursion wala

int small = n % 10; //small Calculation
if(small == 0){
    return ans + 1;
}
return ans;


}  
   

int main(){
    int n;
    cin >> n;

    cout<<count(n);


}