
/*

List are the same as a vector but this works like doubly linked list that why list have front operations and functions.

*/

#include<iostream>
#include<list>

using namespace std;

int main(){

    // initializing list variable

    list<int> l;

    // push_back()  - for appending value at the end of the list
    // push_front() - for appending value at the front of the list
    // emplace_back() and emplace_front() works the same way like push_back() and push_front()

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(5);

    // for print list

    for(int i: l){
        cout << i << " ";
    }
    cout << endl;

    // size
    // erase 
    // clear
    // begin
    // end
    // rbegin
    // rend
    // insert 

    // support all the function same like vector
    return 0;
}