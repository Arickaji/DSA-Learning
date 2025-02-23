#include<iostream>
#include<vector>
using namespace std;

// insertion sort

/*

1. iterate through the array
2. compare each element with the previous elements
3. if the current element is smaller than the previous element, shift the previous element to the right
4. repeat step 2 and 3 until the current element is in its correct position

*/

int main(){

    vector<int> arr = { 2, 1 , 4 , 6 , 4 };
    int n = arr.size();
    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > curr){
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }

    cout << "Sorted Array : " << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " " << endl;
    }    

    return 0;
}