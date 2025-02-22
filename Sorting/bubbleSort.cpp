#include<iostream>
#include<vector>

using namespace std;

/*

    Bubble Sort Algorithm in C++

    This algorithm repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

    Time Complexity: O(n^2)
    Space Complexity: O(1)
    
    - Bubble sort apply on the n-1 iternation of the array.
    - second loop for the list would be decreasing the search amount 
    - compare with the arr[j] > arr[j + 1]
    - Swap the values in the array

*/

int main(){

    vector<int> arr = {1, 4 , 3 , 2 , 6 , 5 } ;

    int n = arr.size();

    for(int i = 0; i < n - 1; i++){

        bool isSwap = false;

        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);  // swap elements
            }
        }

        if(!isSwap){ // array is already sorted
            return;
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}