
/*

Deque are consider as a dynamic array which can access randomly.
list can not be access randomly.

For example:

deque[2] = possible
lisst[2] = not possible

*/

#include<iostream>
#include<deque>

using namespace std;

int main(){

    // define deque variable 
    deque<int> d;

    // push_back() and push_front() - for appending value at the end and front of the deque

    d.push_back(1);
    d.push_back(2);
    d.push_front(3);

    // all the function like erase , clear , begin , end and other works the same in deque

    // print out the deque

    for(int i : d){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}