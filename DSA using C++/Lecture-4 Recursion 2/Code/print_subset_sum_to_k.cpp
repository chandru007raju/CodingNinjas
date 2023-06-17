
#include <iostream>
#include <vector>
using namespace std;

void helper(int input[], int size, int output[], int m,int key) 
{
    if(size == 0){
        int sum = 0;
        for(int i=0;i<m;i++){
            sum += output[i];
        }
        if(sum == key){
            for(int i=0;i<m;i++){
            cout<<output[i]<<" ";
        }
        cout<<endl;
        }
        return;
    }

    helper(input+1,size -1,output,m,key);
    output[m] = input[0];
    m++;
    helper(input+1,size -1,output,m,key);

}
void printSubsetSumToK(int input[], int size,int key)
{
    int output[15];
    helper(input,size,output,0,key);
}

// OR

/*
void helper(int input[], int size, int output[], int k, int m)
{
    if (size == 0)
    {
        if (k == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << output[i] << " ";
            }
            cout << endl;
            return;
        }
        else
            return;
    }

    helper(input + 1, size - 1, output, k, m);
    output[m] = input[0];
    m++;
    helper(input + 1, size - 1, output, k - input[0], m); // Important Step -->
}

void printSubsetSumToK(int input[], int size, int k)
{
    int output[100];
    helper(input, size, output, k, 0);
}

*/


int main()
{
    int input[1000], length,key;
    cin >> length>>key;
    for (int i = 0; i < length; i++)
        cin >> input[i];
    
    printSubsetSumToK(input, length,key);
}
