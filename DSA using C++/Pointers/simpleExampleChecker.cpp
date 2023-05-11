// #include <iostream>
// using namespace std;

// int main(){

    // int a = 7;
    // int *c = &a;
    // c = c + 1;
    // cout  << a << "  " << *c <<endl;


    // int a[3] = {2, 3};
    // cout << *(a)<<" " <<a <<" "<<a[0];

    // int a[6] = {1, 2, 3};
    //     int *b = a;
    //     cout << b[0];

//     char ch = 'a';
//  char* ptr = &ch;
// //  ch++;
// //  ch += 2;
//  cout << *ptr << endl;

// char b[] = "xy";  
// char *c = &b[0];  // This is similar to char* c = &b
// cout << c[0] << endl;  
// cout<<c<<endl;

// char b[] = "xyz";
// char *c = &b[0];
// c++;     // this moves the memory address(c) to point to the second index
// // c += 2; // this moves the memory address(c) to point to the third index
// cout << c << endl;



    
// }




// void fun(int a[]) {  // this takes input like this --> int a[] =
    
//     cout<<&a[0]<<endl;
//     cout << a[0] << " "<<a[1]<<" "<<a[2];
// }

// int main() {
//     int a[] = {1, 2, 3, 4,5};
//     cout<<(a + 2)<<endl;
//     cout<<&a[0]<<" "<<&a[1]<<" "<<&a[2]<<" "<<&a[3]<<" "<<&a[4]<<endl;
//     fun(a + 2);

//     // cout << a[0];
// }


// int main(){
//     int a = 100;
//     int *p = &a;         //--> 100
//     int **q = &p;        //-->**q = 100
//     int b = (**q)++ + 4;   //--> b = (100)++ + 4 -->104
//                         //      now in next line **q = 101
//     cout << a << " " << b << endl;
// }

// int main(){
// int a = 100;
//   int *p = &a;
//   int **q = &p;
//   int b = (**q)++;
//   int *r = *q;
//   (*r)++;
//   cout << a << " " << b << endl;
// }


// #include <iostream>
// using namespace std;

// int main ()
// {
//   int numbers[5];
//   int * p;
//   p = numbers; //--> p[0] is accessible this stores the numbers arr of size 5
//   *p = 10;     // --> assigns p[0] = 10;
//   p = &numbers[2];   // p new stores array numbers of size 2
//   *p = 20;           //-->stores 20 in index 2 of arr numbers
//   p--;               // points to index 1
//   *p = 30;           // stores 30 at index 1
//   p = numbers + 3;   // points to index 3 of arr numbers
//   *p = 40;           // stores 40 at index 3
//   p = numbers;       // points to 0 th index 
//   *(p+4) = 50;       // points to 4 th index and stores 40 at that index
//   for (int n=0; n<5; n++) {
//      cout << numbers[n] << ",";
//   }
//   return 0;
// }

// int main ()
// {
//   int numbers[5];
//   int * p;
//   p = numbers; 
//   *p = 10;
//   p = &numbers[2]; 
//   *p = 20;
//   p--; 
//   *p = 30;
//   p = numbers + 3;
//   *p = 40;
//   p = numbers;
//   *(p+4) = 50;
//   for (int n=0; n<5; n++) {
//      cout << numbers[n] << ",";
//   }
//   return 0;
// }


// #include<iostream>
// using namespace std;
// void swap (char *x, char *y) 
// {
//   char *t = x;
//   x = y;
//   y = t;
// }
// int main()
// {
//     char a[] = "ninjasquiz";
//    char *x = a;
//    char b[] = "codingninjas";
//    char *y = b;
//    char *t;
//    swap(x, y);
//    cout<<x << " "<<y;
//    t = x;
//    x = y;
//    y = t; 
//    cout<<" "<<x<< " "<<y;
//    return 0;
// }



//  #include<iostream>
// using namespace std;
// int main() {
//   char st[] = "ABCD";
//   for(int i = 0; st[i] != '\0'; i++) {
//      cout << st[i] <<" "<< *(st)+i <<" "<< *(i+st) <<" "<< i[st];
//      cout<<endl;
//   }
//   return 0;
// }


// #include <iostream>
// using namespace std;
// void Q(int z)
// {
//   z += z;
//   cout<<z << " ";
// }

// void P(int *y) 
// {
//   int x = *y + 2;   //--> 7 --> x
//   Q(x);
//   *y = x - 1;       //--> 6 --> *y
//   cout<<x << " ";
// }

// int main()
// {
//   int x = 5;
//   P(&x);
//   cout<<x;
//   return 0;
// }