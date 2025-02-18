// vector is the same as array but vector can be dynamic mean that the sie of the vector is not fixed it can be changed.
// this is the major difference between vector and array

// STL (standard template library ) is a library has lots of data structures inside it which can help to implement a particular data structure template to solve particular problem ) 

// include vector header files into the c++ code
// #include <vector>

// syntax of vector

// vector<int> <<name>>; 

// vector<int> vec = {1,2,3,4};

// vector<int> vec(3,0); // first element is a size of the vector and second element is value of the vector 
// after initializing the above vector the vector would be look like this vec = {0 , 0 , 0}

// difference between static and dynamic allocation 

// static allocation done at compile time
// dynamic allocation done at runtime

// static allocation store in stact memory
// dynmaic allocation store in heap memory

#include<iostream>
#include<vector>
using namespace std;

// to run the vector and other data structure we have to mention -std=c++11 in the terminal so find terminal command will look like this=

// g++ -std=c++11 <FileName>.cpp && ./a.out

// Vector Function
// 1. size() to find the size of the vector
// 2. push_back() is use to append the value at the end of the vector
// 3. pop_back() is used to remove the value at the end of the vector
// 4. front() is used to print the first element of the vector
// 5. at(<indexValue>) is used to print a particular value at the index value privided as in at(<indexValue>)

int main(){
    
    // to print the elemnt of vector we use for each loop instean simple for loop
    // in for each loop the i is not stand for the index it will be value itself

    // find the size of the vector
    
    vector<int> marks;

    // push the values into the vector
    marks.push_back(65);
    marks.push_back(64);
    marks.push_back(63);

    cout << "Size of marks vector : " << marks.size() << endl;

    // print the values inside the marks vector
    for(int value : marks){
        cout << value << " "; 
    }

    cout << endl;

    // after applying pop back
    marks.pop_back();

    cout << "At the First place : " << marks.front() << endl;

    cout << "At the 1 Index the number is : " << marks.at(1) << endl;

    return 0;
}