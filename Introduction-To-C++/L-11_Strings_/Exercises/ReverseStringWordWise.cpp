
// #include <iostream>
// #include "solution.h"
// using namespace std;

// int length(char input[])
// {
//     int count = 0;
//     for (int i = 0; input[i] != '\0'; i++)
//     {
//         count++;
//     }
//     return count;
// }

// void reverse(char input[], int start, int end)
// {
//     int i = start;
//     int j = end;
//     while (i <= j)
//     {
//         int temp = input[i];
//         input[i] = input[j];
//         input[j] = temp;
//         i++;
//         j--;
//     }
// }

// void reverseStringWordWise(char input[])
// {
//     // Write your code here
//     int size = length(input);
//     cout<<size<<endl;

//     reverse(input, 0, size - 1);
//     // cout<<input<<endl;

//     int start = 0;
//     for (int i = 0; input[i] != '\0'; i++)
//     {
//         if (input[i] == ' ')
//         {
//             reverse(input, start, i - 1);
//             // cout<<input<<endl;
//             start = i + 1;
//         }
        // else if (i == size-1)
        // {
        //     reverse(input, start, i);
        //     cout<<input<<"-->"<<endl;
        // }
//     }
// }

// int main()
// {
//     char input[1000];
//     cin.getline(input, 1000);
//     reverseStringWordWise(input);
//     cout << input << endl;
// }


#include<iostream>
#include<cstring>
using namespace std;

int length(char input[]){
    int count = 0;
    for(int i=0;input[i] != '\0';i++){
        count++;
    }
    return count;
}

void reverse(char input[],int start,int end){
    int i = start;
    int j = end;

    while(i<=j){
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
    
}

void ReverseStringWordWise(char input[]){

    int size = length(input);
    reverse(input,0,size-1);

    int start = 0;
    for(int i = 0;input[i] != '\0';i++){
        if(input[i] == ' '){
            reverse(input,start,i-1);
            start = i +1;
        }
        else if(i == size-1){
            reverse(input,start,i);
        }
    }
}

int main(){
    int s = 1e6;
    char input[s];
    cin.getline(input,s);
    
    ReverseStringWordWise(input);
    cout << input << endl;
}

