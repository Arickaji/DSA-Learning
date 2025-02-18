// find the intersection of the two arrays 

#include<iostream>
using namespace std;

int main(){
    // array
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 6, 7};

    // size 
    int sizeArr1 = sizeof(arr1) / 4;
    int sizeArr2 = sizeof(arr2) / 4;

    for(int i = 0 ; i < sizeArr1 ; i++){
        for(int j = 0;j < sizeArr2 ; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
            }
        }
    }

    cout << endl;

    return 0;
}