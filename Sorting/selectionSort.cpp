#include<iostream>
#include<vector>

using namespace std;

// selection sort

/*

1. selection
2. find the smallest element in the remaining unsorted array
3. swap the smallest element with the first element of the unsorted array
4. repeat step 2 and 3 until the entire array is sorted

*/

int main(){

    vector<int> arr = { 2, 1 , 4 , 6 , 4 };

    int n = arr.size();

    for(int i = 0; i < n - 1; i++){

        int minIndex = i;

        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

    cout << "Sorted Array : " << endl;

    for(int i = 0; i < n;i++){
        cout << arr[i] << " " << endl;
    }    
    return 0;
}