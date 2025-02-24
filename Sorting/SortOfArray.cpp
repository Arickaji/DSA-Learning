/*

arr = {0 , 1, 0 , 0 , 1 , 2 , 1 , 1 , 2 }

array is only having 0 , 1 , 2 value

task it to sort the array

output array = { 0 , 0 , 0 , 1 , 1 , 1 , 1 , 2 , 2}

*/
#include<iostream>
#include<vector>

using namespace std;

int main(){


    vector<int> arr = {0 , 1, 0 , 0 , 1 , 2 , 1 , 1 , 2 };

    int n = arr.size();

    int c1  = 0 , c2 = 0 , c3 = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 0) c1++;
        else if(arr[i] == 1) c2++;
        else c3++;
    }

    int index = 0;

    for(int i = 0;i < c1;i++){
        arr[index++] = 0;
    }

    for(int i = 0;i < c2; i++){
        arr[index++] = 1;
    }

    for(int i=0; i < c3;i++){
        arr[index++] = 2;
    }


    /// output

    cout << "Sorted Array : " << endl;

    for(int i = 0 ; i < n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}