#include <iostream>
#include<vector>
#include <unordered_map>
#include<map>
using namespace std;

// PRACTICE ---->
/*
int main()
{
    unordered_map <string,int> mymap; // ttis will be stored as a pair<string,int> ;
    mymap["chandu"] = 10;
    mymap["dimple"] = 100;
    mymap["hrithi"] = 1001;
    mymap["unknown"] = 00;

    unordered_map <string,int> ::iterator it = mymap.begin();
    while(it != mymap.end()){
        cout<<"Key :"<<it->first<<",Value :"<<it->second<<endl;
        it++;
    }
    cout<<endl;


    // Find ---> mymap.find("unknown");
    unordered_map <string,int> ::iterator it3 = mymap.find("unknown"); // we can create a pointer to any key;

    // Erase ----> mymap.erase(Address);
    
    // mymap.erase(mymap.find("unknown"));  // Single  delete
    //   OR ---->
    mymap.erase(it3); 


    unordered_map <string,int> ::iterator it1 = mymap.begin();
    while(it1 != mymap.end()){
        cout<<"Key :"<<it1->first<<",Value :"<<it1->second<<endl;
        it1++;
    }

    return 0;
}

*/

// int main()
// {
//     // ordered_map <int,char> mymap1;
//     map <int,char> mymap1;

//     mymap1[1] = 'A';
//     mymap1[2] = 'E';
//     mymap1[3] = 'D';
//     mymap1[4] = 'C';
//     mymap1[5] = 'B';

//     map<int,char>:: iterator it = mymap1.begin();

//     while(it != mymap1.end())
//     {
//         cout<<"Key :"<<it->first<<" Value :"<<it->second<<endl;
//         it++;
//     }

//     return 0;
// }


// iterators in vector -->

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);

    vector<int> :: iterator it1 = v.begin();
    while(it1 != v.end()){
        cout<<*it1<<endl;
        it1++;
    }
    //Erase ----> v.erase(from Address,to Address);
    v.erase(v.begin(),v.end());

    vector<int> :: iterator it2 = v.begin();
    cout<<"Prints empty --> as you erased all data from beginning to end "<<endl;
    while(it2 != v.end()){
        cout<<*it2<<endl;
        it2++;
    }

    return 0;
}