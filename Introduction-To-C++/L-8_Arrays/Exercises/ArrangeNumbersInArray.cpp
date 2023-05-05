#include <iostream>
using namespace std;

int arrange(int array[],int size) {
    int endindex = size-1;
    int start = 0;
    int printvalue  = 1;
    while(start<=endindex){
        array[start] = printvalue;
        printvalue++;
        if(start == endindex){
            break;
        }
        else{
            array[endindex] = printvalue;
            printvalue++;
        }
        endindex--;
        start++;
    }

    return 0;
}

int main (){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int N;
        cin>>N;
        int *arr = new int[N];
        arrange(arr,N);
        for(int i=0;i<N;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
}