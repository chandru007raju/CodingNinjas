#include<iostream>
using namespace std;


int subset(int input[], int n, int output[][20]) //  1| 2 |3 --> 0
{
    if( n == 0){
        output[0][0] = 0;
        return 1;
    }

    int smallOutputsize = subset(input + 1,n-1,output);
    for(int i=0;i<smallOutputsize;i++){
        output[smallOutputsize + i][0] = output[i][0] + 1;
        output[smallOutputsize + i][1] = input[i];

        //output[smallOutputsize +i-->3][2] = output[i][0] + 1;
        for(int j=2;j<output[smallOutputsize + i][0]+1; j++){
            output[smallOutputsize + i][j] = output[i][j - 1];
        }
    }
    return 2* smallOutputsize;
}

int main()
{
    int input[20], length, output[350][20];
    cin >> length;
    for (int i = 0; i < length; i++)
        cin >> input[i];

    int size = subset(input, length, output);

    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j <= output[i][0]; j++)
        {
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
}
