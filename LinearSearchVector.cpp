// linear search on vector

#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>& v , int target){
    int index = -1;
    for(int i = 0 ; i < v.size() ; i++){
        if(v[i] == target){
            index = i;
            break;
        }
    }
    return index;
}

int main(){

    vector<int> vec = {1,2,3,4};
    int target = 3;

    cout << "Target found in vector : " << linearSearch(vec , target) << endl;

    return 0;
}