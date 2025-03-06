/*

Vector are the same as array but the major different between the array and the vector is that the size of the array can not be change but the vector can be resized.

Mainly Vector works like the same a array.

*/

#include<iostream>
#include<vector>

using namespace std;

int main(){

    // initializing vector variable 

    vector<int> v; // the size of this vector right is 0.

    // there are many ways to define vector

    // initializing vector value while defining

    vector<int> v1 = {1 ,2 ,3 ,4 ,5 }; 

    // initializing vector with size and value

    vector<int> v2(5, 0); // 5 represent the size and 0 value

    // initializing new vector with already existing vector
    vector<int> newV(v1);

    
    // push_back() - For appending value at the end of the vector 

    v.push_back(1); // the capacity of the vector 2
    v.push_back(2); // the capactiy of the vector 4
    v.push_back(3); // the capactiy of the vector 6

    // size() - to get the size of the vector

    cout << "Size of the vector v is : " << v.size() << endl;

    // capacity() - to get the capacity of the vector

    cout << "Capactiy of the vector is : " << v.capacity() << endl;

    // to print the values inside the vector using loop

    for(int i : v1){
        cout << i << " ";
    }

    cout << endl;

    // pop_back() - to remove the element from the end of the vector

    v1.pop_back();
    cout << "Size : " << v1.size() << endl;

    // at() or <vectorName>[index] - to get the index of the element
    cout << "Value ar the index 2 : " << v1.at(2) << " and " << v1[2] << endl;

    // front and back () to get the first and end of the element 

    cout << "First element : " << v1.front() << endl;
    cout << "Last element : " << v1.back() << endl;

    // erase() - to remove the element from the vector for particular index
    v1.erase(v1.begin() + 1); // index = 2
    cout << "Size after erasing : " << v1.size() << endl;

    // insert() - to insert the element at the particular index into the vector
    v1.insert(v1.begin() + 1 , 12);
    cout << "Size after inserting : " << v1.size() << endl;

    // clear() - this will remove all the element of the vector not capacity
    v2.clear();
    cout << "Size after clear : " << v2.size() << endl;

    // empty() - to check wheather the vector is empty or not
    cout << "Is the vector empty ? " << v2.empty() << endl;

    // iterators : 
    // this all iterator work with the memort so we can directly get the value by using *(v.begin())
    // begin() - to get the first iterator of the vector
    // end() - to get the last iterator of the vector ( this will give the value n + 1 to get the original value alway use n - 1)

    cout << "First element of the vector is :" << *(v1.begin()) << endl;
    cout << "Last element of the vector is :" << *(v1.end() - 1) << endl;

    // special iterator for vector

    // forward loop 
    for(auto it = v1.begin() ; it != v1.end() ; it++){
        cout << *it << " ";
    }
    cout << endl;

    // reverse loop
    for(auto it = v1.rbegin() ; it!= v1.rend() ; it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}