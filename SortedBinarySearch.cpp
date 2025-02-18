#include<iostream>
#include<vector>

using namespace std;

int RotatedBSearch(vector<int> arr , int target){
	int st = 0 , end = arr.size() - 1;

	while(st <= end){
		// find the mid
		int mid = st + ( end - st ) / 2;

		if(arr[mid] == target){
			return mid;
		}

		// check which side is sorted
		if(arr[st] <= arr[mid]){
			// left side sorted

			if(arr[st] <= target && target <= arr[mid]){
				end = mid - 1;
			} else {
				st = mid + 1;
			}

		} else{
			// right side sorted

			if (arr[mid] <= target && target <= arr[end]){
				st = mid + 1;
			} else{
				end = mid - 1;
			}

		}	

	}
	return -1;
}

int main(){

	vector<int> arr = {3 ,4 ,5 , 0 , 1, 2};
	int target = 2;

	cout << RotatedBSearch(arr , target) << endl;


	return 0;
}