#include <iostream>
using namespace std;

int duplicateNumber(int arr[],int s1){
    for(int i=0;i<s1;i++){
        for (int j=0;j<s1;j++){
            if(i == j){
                continue;
            }
            else if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
    return 0;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cout<< duplicateNumber(input, size) << endl;
    }

    return 0;
}