/*
    Task is to reverse array without using second array

    for to solve this problem we are using 2 pointers method to reverse the array.

*/

#include<iostream>
using namespace std;

void reverseArray(int arr[] , int size){
    int start = 0;
    int end = size - 1;

    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int arr[] = {12, 24, 36, 48};
    int size = sizeof(arr) / 4;
    reverseArray(arr , size);

    cout << "After Applying reverse array 2 pointer alogorithm " << endl;

    for(int i = 0;i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}