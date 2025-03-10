
/*

Map - Map is specially use for storing key value pairs.
key - value

there is also two types of map 

unordered_map - this is used for better performance and this map contains unordered keys and not support duplicate

multi_map - this is used to store multiple key values pairs 
and to insert data into multi-map use insert function and emplace function

*/

#include<iostream>
#include<map>

using namespace std;

int main(){

    // defining map variable
    map<string, int> m;

    m["tv"] = 100;
    m["radio"] = 50;
    m["mobile"] = 200;

    // print map variable

    for(auto pr : m){
        cout << pr.first << " : " << pr.second << endl;
    }

    /*
    output : 
        mobile : 200
        radio : 50
        tv : 100
    */

    // normal map variable store data in ascedning order 

    // to find the element inside the map
    if(m.find("tv") != m.end()){
        cout << "tv found" << endl;
    }
    // multi map

    multimap<string, int> m1;
    m1.insert({"tv", 100});
    m1.insert({"tv", 150});
    m1.insert({"radio", 50});
    m1.insert({"mobile", 200});

    cout << "multi map : " << endl;

    // print multi map variable
    for(auto pr: m1){
        cout << pr.first << " : " << pr.second << endl;
    }

    // unordered_map 

    unordered_map<string, int> m2;
    m2["tv"] = 100;
    m2["radio"] = 50;
    m2["mobile"] = 200;
    m2["tv"] = 250;

    cout << "unordered_map : " << endl;

    // print unordered_map variable
    for(auto pr : m2){
        cout << pr.first << " : " << pr.second << endl;
    }


    return 0;
}