#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a = 1;
    int b = 1;
    int c;
    for(int i=1;i<n;i++){ //start the counting from 0 
	            c=a+b;
	            a=b;
	            b=c;
	        }
    cout<<a<<endl;
}