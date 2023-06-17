
#include <iostream>
#include <vector>
using namespace std;

void helper(int input[], int size, int output[], int m) // 1 | 2  --> empty,2,
{
    if(size == 0){
        for(int i=0;i<m;i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }

    helper(input+1,size -1,output,m);
    output[m] = input[0];
    m++;
    helper(input+1,size -1,output,m);

}
void printSubsetsOfArray(int input[], int size)
{
    int output[15];
    helper(input,size,output,0);
}

//  // Using vector
// void helper(int *input, int size, vector<int> output){
//     if (size == 0){
//         for (auto num : output){
//             cout << num << " ";
//         }
//         cout << endl;
//         return;
//     }
    
//     helper(input + 1, size - 1, output);
//     output.push_back(input[0]);
//     helper(input + 1, size - 1, output);
// }

// void printSubsetsOfArray(int input[], int size) {
//     helper(input, size, vector<int>{});
//     //helper(input, size, {}); it is also allowed
// }

int main()
{
    int input[1000], length;
    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> input[i];
    printSubsetsOfArray(input, length);
}
