// pair sum 

// vector arr = { 2, 7, 11, 15 } target = 9 

// so the answer should be 2 , 7 or the index value of the answers which is 0 ,1

#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = { 2, 7, 11, 15 };
    int target = 13;

    for(int i = 0; i < arr.size() ; i++){
        for(int j = i + 1 ; j < arr.size() ; j++){
            if((arr[i] + arr[j]) == target){
                cout << "Answer found at the index : " << i << " " << j << endl;
            }
        }
    }
    return 0;
}