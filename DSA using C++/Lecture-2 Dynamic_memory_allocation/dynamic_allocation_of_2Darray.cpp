// #include <iostream>
// using namespace std;

// int main()
// {
//     //Creating an array of size 10*20

//     //Creating an array of pointers of size 10 i.e. the number of rows
//     int **p = new int *[10];
//     int i, j;
//     for (i = 0; i < 10; i++)
//     {
//         //Creating an array of size 20(no. of columns) to link it to the indiviadual entries of pointer array.
//         p[i] = new int[20];
//         //Taking entries
//         for (j = 0; j < 20; j++)
//         {
//             cin >> p[i][j];
//         }
//     }
//     // Deleting array
//     for (i = 0; i < 10; i++)
//     {
//         delete[] p[i];
//     }
//     delete[] p;
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int row;
    int col;
    cin>>row>>col;
    int *arr =NULL; // --> new int [5]; --> array of int(integers)
    int* *array =NULL; //--> new int* [5]; --> array of int*(pointers)
    array = new int*[row];
    for(int i=0;i<row;i++){
        array[i] = new int[col]; //--> the address of 1 st element of array is array[0],this contains a pointer where a array can be stored. we will assign this to a array of integer type.
        for(int j=0;j<col;j++){
            cin>>array[i][j];
        }

    }   
    for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                    cout<<array[i][j]<<" ";
                }
                cout<<endl;
        }

    // after this the memory allocated in the heap must be cleared manually so we use the delete statement to release the allocated memory address.
    for(int i=0;i<row;i++ ){
        delete[] array[i];        
    }
    delete[]array;
    return 0;

}