
/*

arr = { 1 , 2 , 5 , 4 , 3}

next permutation is 1 3 2 5 4

find the pivot which is 2 pivot can be find using a[i] < a[i + 1] : pivot
reverse the pivot + 1 to n - 1

*/

#include<iostream>
#include<vector>

using namespace std;

int find_pivot(vector<int> arr , int n){
    int pivot = -1;

    for(int i = n - 2;i >= 0; i--){
        if(arr[i] < arr[i+1]){
            pivot = i;
            return pivot;
        }
    }
    return pivot;
}


void next_permutation(vector<int>& arr, int n ,int pivot){

    if(pivot == -1){
        // reverse the array
        reverse(arr.begin(), arr.end());

    } else {
        // rever the pivot 
        for(int i = n - 1;i >= 0;i--){
            if(arr[i] > arr[pivot]){
                swap(arr[i], arr[pivot]);
                break;
            }
        }

        // reverse the pivot + 1 to n - 1

        reverse(arr.begin() + pivot + 1, arr.end());

    }
}

int main(){

    vector<int> arr = { 1 , 2 , 5 , 4 , 3};
    int n = arr.size();

    int pivot = find_pivot(arr, n);
    next_permutation(arr, n, pivot);

    cout << "Next Permutation : ";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}