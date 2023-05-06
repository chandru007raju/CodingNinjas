#include <iostream>
using namespace std;


    int linearSearch(int arr[], int x) {
        //Your code goes here
        int n = 10;
        int index = -1;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
               index=i;
               break;
            }
        }
        return index;
    }
     //main code to check the program
int main() {
        int arr[] = {1, 2,3, 4,5,6,7,8,9,10};
        int ele;
        cin>>ele;
        int index=(linearSearch(arr, ele));

        cout<<"element found at index :"<<index; 
    } 


