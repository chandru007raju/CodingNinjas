#include <iostream>
#include<algorithm>
using namespace std;

void arrayIntersection(int arr1[], int arr2[],int s1,int s2){
    for (int i=0;i<s1;i++){
        for(int j=0;j<s2;j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j] = INT_MIN;
                break;
            }
        }

    }
}
int main(){
    int arr1[] = {1,2,3,4,5,-9872};
    int s1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {5,8,1,-9872};
    int s2 = sizeof(arr2)/sizeof(arr2[0]);

    arrayIntersection(arr1,arr2,s1,s2);


}