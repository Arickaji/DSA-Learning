#include<iostream>
#include<vector>

using namespace std;

// total time complexity O(log * N)

bool isPossible(vector<int> arr , int n , int c , int minAllowed){
	int cows = 1 , lastStallPos = arr[0];

	for(int i = 1; i < n;i++){ // O(n)
		if(arr[i] - lastStallPos >= minAllowed){
			cows++;
			lastStallPos = arr[i];
		}

		if(cows == c){
			return true;
		}
	}

	return false;

}


int binarySearch(vector<int> arr , int n , int c){

	sort(arr.begin() , arr.end());

	int st = 1 , end = arr[n-1] - arr[0] , ans = -1;

	while(st <= end){ // O(log (Range) )

		int mid = st + ( end - st ) / 2;

		if(isPossible(arr , n , c , mid)){
			ans = mid;
			st = mid + 1;
		} else {
			end = mid - 1;
		}

	}
	return ans;

}

int main(){

	vector<int> arr = {1, 2, 8, 4, 9};

	int n = 5;
	int c = 3;


	cout << binarySearch(arr , n , c) << endl; 

	return 0;
}