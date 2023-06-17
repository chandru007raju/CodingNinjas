#include<iostream>
using namespace std;

int returnSubSetsumToK(int input[],int n,int output[][20],int k){ // 1234 -->3

    if(n == 0){
        if(k == 0){
            output[0][0] = 0;
            return 1;
        }
        else{
            return 0;
        }        
    }
    int op1[350][20],op2[350][20];
    int size1 = returnSubSetsumToK(input + 1, n - 1, op1, k - input[0]);
    int size2 = returnSubSetsumToK(input + 1, n - 1, op2, k); 
    for(int i=0;i<size1;i++){
        int s1 = op1[i][0];
        for (int j = 1; j <= s1; j++)
        {
            output[i][j + 1] = op1[i][j];
        }
        output[i][0] = s1 + 1;
        output[i][1] = input[0];
    }
    for (int i = 0; i < size2; i++)
    {
        for (int j = 0; j <= op2[i][0]; j++)
        {
            output[i + size1][j] = op2[i][j];
        }
    }
    return size1 + size2;

}

// 
//

int main()
{
    int input[20], length, key,output[350][20];
    cin >> length>>key;
    for (int i = 0; i < length; i++)
        cin >> input[i];

    int size = returnSubSetsumToK(input, length, output,key);

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j <= output[i][0]; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}

