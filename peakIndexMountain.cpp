#include<iostream>
#include<vector>
using namespace std;

// linear search approach 


int bruthForce(vector<int> arr){
	int st = 1;
	int end = arr.size() - 1;

	while(st < end){
		if (arr[st - 1] < arr[st] && arr[st] > arr[st + 1]){
			return arr[st];
		}
		st+=1;
	}
	return -1;
}

int binarySearch(vector<int> arr){
	int st = 1 , end = arr.size() - 2;

	while (st <= end){

		int mid = st + ( end - st ) / 2;

		if (arr[mid-1] < arr[mid] && arr[mid] > arr[mid + 1]){
			return arr[mid];
		} else if (arr[mid-1] < arr[mid]){
			st = mid + 1;
		} else {
			end = mid - 1;
		}

	}
	return -1;
}


int main(){

	vector<int> arr = {0 , 3 ,8, 9 , 1, 5 ,2};

	cout << bruthForce(arr) << endl;
	cout << binarySearch(arr) << endl;

	return 0;
}