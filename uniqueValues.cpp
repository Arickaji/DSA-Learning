// print all the unique numbers inside the array

#include <iostream>
using namespace std;

int main(){

    int arr[] = {12, 24, 36, 12, 48, 24};  // duplicate number 12 is present in the array.
    int size = sizeof(arr) / 4;

    for(int i = 0; i < size; i++){
        bool unique = true;
        
        for(int j = 0; j < size; j++){
            if( i != j and arr[i] == arr[j]){
                unique = false;
                break;
            }
        }

        if(unique){
            cout << arr[i] << " ";
        }
    }   
    cout << endl;
    return 0;
}