
/*

Set is also a type of container to store the values

Set is not ordered and does not allow duplicate values.

There are two types of set:

1. multiset - suppot duplicates values
2. unordered_set - this is used for better performance and this set contains unordered keys and not support duplicate

*/

#include<iostream>
#include<set>

using namespace std;

int main(){

    // define set variable
    set<int> s;

    // insert() - to insert value in the set
    s.insert(1);
    s.insert(2);
    s.insert(3);

    // print set values

    for(auto val : s){
        cout << val << " ";
    }

    // lower_bound() and upper_bound()
    auto lb = s.lower_bound(2);
    auto ub = s.upper_bound(2);

    cout << "\nLower Bound: " << *lb << endl;
    cout << "Upper Bound: " << *ub << endl;

    // erase() - to remove value from the set

    // multi-set
    multiset<int> ms;

    ms.insert(1);
    ms.insert(2);
    ms.insert(2); // duplicate value

    // print multi-set values
    for(auto val : ms){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}