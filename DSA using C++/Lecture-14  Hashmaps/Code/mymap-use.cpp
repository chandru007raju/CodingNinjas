#include<iostream>
#include<string>
#include "mymap.h"
using namespace std;

int main()
{
    mymap<int> map;
    map.insert("chandu",1);
    map.insert("dimple",2);
    map.insert("hrithi",3);
    map.insert("chinnu",4);
    map.insert("chethu",5);
    map.insert("unknown",6);

    cout<<map.size()<<endl;
   
    map.remove("unknown");
    cout<<map.size()<<endl;

    cout<<map.getvalue("dimple")<<endl;
    cout<<map.loadFactor();

}