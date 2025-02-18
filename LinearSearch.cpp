/*
    Linear Search

    Task to to find the target value inside the array and return the value of that index if target is not found inside the array return -1.
*/

#include<iostream>
using namespace std;

int linearSearch(int arr[] , int sz , int target){
    for(int i = 0; i < sz; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {12 , 24 , 25 , 26 , 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 27;

    int index = linearSearch(arr , size , target);
    cout << "found at the : " <<  index << endl;
    return 0;
}