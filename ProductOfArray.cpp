// product of array
// array = [1 , 2, 3, 4]
// ans = [24 , 12 , 8 , 4]

#include<iostream>
#include<vector>
using namespace std;

vector<int> bruteForceSolution(vector<int> arr){
	int n = arr.size();
	vector<int> ans;

	for(int i = 0; i < n ; i++){
		int temp = 1;
		for(int j = 0; j < n; j++){
			if(i != j){
				temp *= arr[j];
			}
		}
		ans.push_back(temp);
	}
	return ans;
}

vector<int> optimalSolution(vector<int> arr){
	int n = arr.size();
	vector<int> ans(n , 1);

	// prefix
	for(int i = 1 ; i < n ; i++){
		ans[i] = ans[i - 1] * arr[i - 1];
	}

	//surfix
	int surfix = 1;
	for(int i = n - 2; i >= 0 ; i--){
		surfix *= arr[i+1];
		ans[i] *= surfix;
	}
	return ans;
}

int main(){

	vector<int> arr = {1 ,2 , 3 , 4};

	vector<int> ans = bruteForceSolution(arr);
	vector<int> ans_better = optimalSolution(arr);


	// printing result
	for(int number: ans){
		cout << number << endl;  
	}

	// printing result
	for(int number: ans_better){
		cout << number << endl;  
	}

	return 0;
}