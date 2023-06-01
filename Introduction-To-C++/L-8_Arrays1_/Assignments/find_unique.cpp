// #include <iostream>
// using namespace std;

// int findunique(int arr[],int s){
//     for(int i=0;i<s;i++){
//         bool isunique = true;
//         for(int j=0;j<s;j++){
//             if(i == j){
//                 continue;
//             }
//             else{
//                 if(arr[i] == arr[j]){
//                     isunique = false;
//                     break;
//                 }
//             }
//         }
//         if(isunique){
//             return arr[i];
//         }
//     }
//     return 0;
// }

// int main(){
//     int arr[] = {1,2,3,4,5,4,5,2,1};
//     int s = sizeof(arr)/sizeof(arr[0]);

//     cout<<findunique(arr,s);
// }


#include<iostream>
using namespace std;
int checkunique(int arr[],int n){
    for(int i = 0;i<n;i++){
        bool isUniq = true;
        for(int j =0;j<n;j++){
            if(i == j){
                continue;
            }
            else{
                if(arr[i] == arr[j]){
                isUniq = false;
                break;
            }
        }                   
    }
        if(isUniq){
            return arr[i];
        }
    }
    return 0;
}

int main(){
    
    int arr[] = {1,1,2,4,5,4,5,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<checkunique(arr,n);
    
    
}