#include<iostream>
#include<vector>

using namespace std;

// time Complexity -- O(log * N)

bool isPossible(vector<int> arr , int board, int painter, int mid){
	// mid = maximum time can be accecptance 

	int painters = 1 , time = 0;

	for(int i = 0 ; i < board ; i++ ){ // O(N)
		if(time + arr[i] <= mid){
			time += arr[i];
		} else {
			painters++;
			time = arr[i];
		}
	}

	return painters <= painter;

}

int boardPaint(vector<int> arr , int board , int painter){

	int sum = 0 , maxVal = INT_MIN;

	for(int i = 0; i < board; i++){ // O(N)
		sum += arr[i];
		maxVal = max(maxVal , arr[i]);
	}	

	int st = maxVal , end = sum , ans = -1;

	while(st <= end){ // O(log N )
		int mid = st + ( end - st ) / 2;


		if(isPossible(arr , board , painter , mid)){
			ans = mid;
			end = mid - 1;
		} else {
			st = mid + 1;
		}

	}

	return ans;

}


int main(){

	vector<int> arr = {40 , 30 , 20 , 10};
	int board = 4;
	int painter = 2;

	cout << boardPaint(arr , board , painter) << endl;

	return 0;
}