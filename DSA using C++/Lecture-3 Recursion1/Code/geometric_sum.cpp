/*
#include<iostream>
#include<cmath>
using namespace std;

double Gsum(double n){ // 3 --> 1.875

    if(n == 0){
        return 1;
    }
    double ans = Gsum(n-1);

    double small =  1 / (pow(2, n));
    return small + ans;
}

int main(){
    int n;
    cin>>n;

    cout<<Gsum(n);
}

*/

#include<iostream>
using namespace std;
int power(int x, int n){
    if( n==0){    // base case or terminating case
        return 1;
    }
    int ans = power(x,n-1); // recursive call

    return ans * x; //  small calculation
}

double Gsum(int n){

    if(n == 0){  //Base Case
        return 1;
    }
    double ans  = Gsum(n-1); // Recursive call

    return ans + 1/(power(2,n));


}

int main(){
    int n;
    cin>>n;

    cout<<Gsum(n);
    // cout<<power(x,n);

}