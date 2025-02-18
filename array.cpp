// write a program to calculate total sum of all the numbers inside the array


#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;
    // find the size of the array 
    int size = sizeof(arr) / 4;

    for(int i=0; i < size; i++){
        sum += arr[i];
    }

    cout << "Total Sum of all the numbers inside the array is : " << sum << endl;
    return 0;
}
