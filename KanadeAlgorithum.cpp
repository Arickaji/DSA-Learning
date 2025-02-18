// maximum subarray sum leetcode Question

#include<iostream>
using namespace std;

int main(){

    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr) / 4;

    int maxTotal = INT_MIN;

    for(int st = 0;st < size; st++){
        int current = 0;
        for(int end = st; end < size; end++){
            current += arr[end];
            maxTotal = max(maxTotal, current);
        }
    }

    cout << "Maximum subarray sum leetcode Answer : " << maxTotal << endl;

    return 0;
}