/*

arr = { 1 , 2 , 1 , 0 , 0 }

array is only going to store 0 , 1 , values

Dutch sorting algorithm
this algorithm take 3 pointer variables l , m , h 

l = 0 (start pointer)
m = 0 (middle pointer)
h = n - 1 (end pointer)

Main Logic of this algorithm is that to divide the array into 3 part 
0s = 0 to l - 1
1s = l to h - 1
2s = h to n - 1 

output array = { 0 , 0 , 1 , 1 , 2 }

*/

#include<iostream>
#include<vector>

using namespace std;

void DutchSortingAlgo(vector<int>& arr){
    int n = arr.size();

    int l = 0 , m = 0 , h = n -1;

    while(m <= h){
        if(arr[m] == 0){ // 0 
            swap(arr[l] , arr[m]);
            l++;
            m++;
        } else if (arr[m] == 1){ // 1
            m++;
        } else { // 2
            swap(arr[h] , arr[m]);
            h--;
        }
    }
}

int main(){

    vector<int> arr = { 1 , 2 , 1 , 0 , 0};

    DutchSortingAlgo(arr);

    cout << "Sorted Algo : " << endl;

    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}