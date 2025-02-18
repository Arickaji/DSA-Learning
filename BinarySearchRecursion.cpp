// Binary search apply using Recursion

#include<iostream>
#include<vector>
using namespace std;

int BS_recursion(vector<int> arr , int target , int st , int end){

	if (st <= end){
		int mid = st + (end - st) / 2;

		if (target > arr[mid]){
			return BS_recursion(arr , target , mid + 1 , end);
		} else if ( target < arr[mid] ){
			return BS_recursion(arr , target , st , mid - 1);
		} else{
			return mid;
		}
	} 
	return -1;
}

int main(){
	vector<int> arr = {-1 , 0 , 2 , 5 , 9 , 12};
	int target = 0;
	int st = 0 ;
	int end = arr.size() - 1;

	cout << "Index : " << BS_recursion(arr , target , st, end) << endl;

	return 0;
}