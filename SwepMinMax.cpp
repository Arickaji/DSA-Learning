// write a program to swap the minimum and maximum values inside the array

#include<iostream>
using namespace std;

int main(){
    int arr[] = {12 , 23 , 24 , 53 , 3};
    int size = sizeof(arr) / 4;
    int minArray[] = {INT_MAX , 0}; // minimum value , index
    int maxArray[] = {INT_MIN, 0}; // maximum value , index

    for(int i = 0 ; i < size ; i++){

        if(arr[i] < minArray[0]){
            minArray[0] = arr[i];
            minArray[1] = i;
        }
        if(arr[i] > maxArray[0]){
            maxArray[0] = arr[i];
            maxArray[1] = i;
        }
    }

    // swap min and max values 
    int temp = arr[minArray[1]];
    arr[minArray[1]] = arr[maxArray[1]];
    arr[maxArray[1]] = temp;

    // After applying the transformation 
    cout << "\n";
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}