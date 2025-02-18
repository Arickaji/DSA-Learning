// arr = [1, 1, 2, 3, 3, 4, 4, 5, 5]
// ans = 2

// arr = [10,10,11,11,12,12,13]
// ans = 13

// sorted array in ascending order

#include<iostream>
#include<vector>
using namespace std;

int bruthForce(vector<int> arr){
	int st = 1, end = arr.size() - 2;

	while(st <= end){
		if(arr[st-1] != arr[st] && arr[st+1] != arr[st]){
			return arr[st];
		}
		st+=1;
	}
	return -1;
}

int binarySearch(vector<int> arr){
	int st = 0;
	int n = arr.size();

	if(n == 1) return arr[0];

	int end = n - 1;

	while(st <= end){
		int mid = st + ( end - st ) / 2;

		if(mid == 0 && arr[0] != arr[1]) return arr[mid];
		if(mid == n - 1 && arr[n - 1] != arr[n - 2]) return arr[mid];

		if(arr[mid-1] != arr[mid] && arr[mid+1] != arr[mid]) return arr[mid];

		if(mid % 2 == 0) {
			if(arr[mid - 1] == arr[mid]){
				end = mid - 1;
			} else{
				st = mid + 1;
			}
		} else{
			if(arr[mid - 1] == arr[mid]){
				st = mid + 1;
			} else{
				end = mid - 1;
			}
		}

	}
	return -1;

}

int main(){

	vector<int> arr = {1,1,2,3,3,4,4,5,5};

	cout << "BruthFource Approach Answer : " << bruthForce(arr) << endl;
	cout << "Binary Search Approach Answer : " << binarySearch(arr) << endl;

	return 0;
}