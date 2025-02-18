// reverese vector array 
// to solve this problem we are going to use 2 pointer method to solve this problem

#include<iostream>
#include<vector>
using namespace std;

void reverse_vector(vector<int>& vec){
    int start = 0;
    int end = vec.size() - 1;

    while( start < end){
        int temp = vec[start];
        vec[start] = vec[end];
        vec[end] = temp;

        start++;
        end--;
    }
}

int main(){
    vector<int> vec = {1 , 2, 3, 4, 5, 6};

    reverse_vector(vec);

    for(int value: vec){
        cout << value << " ";
    }
    cout << endl;
    return 0;
}