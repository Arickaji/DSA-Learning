#include<iostream>
#include<vector>

using namespace std;

void mergedSort(vector<int>& A, int m , vector<int> & B , int n){
    int idx = m + n - 1, i = m - 1 , j = n - 1;

    while(i >= 0 && j >= 0){
        if(A[i] >= B[j]){
            A[idx--] = A[i--]; 
        } else {
            A[idx--] = B[j--];
        }
    }

    while(j >= 0){
        A[idx--] = B[j--];
    }
}

int main(){

    vector<int> A = { 1 , 2 , 3 , 0 , 0 , 0};
    int i = 3;

    vector<int> B = { 4 ,5 ,6};
    int j = B.size();

    mergedSort(A,i,B,j);

    cout << "Merged Array : ";

    for(int x : A){
        cout << x << " ";
    }
    cout << endl; 

    return 0;
}