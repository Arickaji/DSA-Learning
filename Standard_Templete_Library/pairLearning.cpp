
/*

Pair is consider as a utility library. this can use for making pair for the same or multiple variable with the different types.

*/

#include<iostream>
#include<vector>

using namespace std;

int main(){

    // defining pair variable
    pair<int, int> p = {1,2};

    // pair can also support different types
    pair<char , int > p2 = {'a' , 2};

    // we can also create pair inside a vector to work like dictionary in python

    vector<pair<int,int>> v = {{1, 2} , {2, 3}};

    // if we want to push back the new data into it there are two ways

    // first push_back()

    v.push_back({4,2});

    // while using push_back() we always have to use {} for appending data this will assumse like a normal insert

    // second way is using emplace_back()

    v.emplace_back(5, 3);

    // emplace_back() will assume the insert like an object so we dont have to write in {}.


    // print the pair

    for(auto i: v){
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}