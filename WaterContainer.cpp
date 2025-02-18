// water container 

/*
	
	height = {1 , 8, 6, 2, 5, 4, 8, 3, 7}
	

	answer 49
	height = 7 
	width = 7


*/

#include<iostream>
#include<vector>
using namespace std;

int solution(vector<int> height){ // bruth force

	int max_water = 0;
	int size = height.size();

	for(int i = 0 ; i< size; i++){
		for(int j = i + 1; j < size ; j++){
			int w = j - i;
			int h = min(height[i] , height[j]);
			int currWater = w * h;

			max_water = max(max_water , currWater);
		}
	}

	return max_water;
}

int optimal_solution(vector<int> height){ // optimal approach using 2 pointers

	int lp = 0 , rp = height.size() - 1;
	int max_water = 0;

	while ( lp < rp ){
		int w = rp - lp;
		int ht = min(height[lp], height[rp]);
		int currWater = w * ht;

		max_water = max(max_water , currWater);

		height[lp] < height[rp] ? lp++ : rp--;
	}

	return max_water;
}

int main(){
	vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

	cout << "Maximum amount is : " << solution(height) << endl;
	cout << "Maximum amount using optimal solution is : " << optimal_solution(height) << endl;
	return 0;
}