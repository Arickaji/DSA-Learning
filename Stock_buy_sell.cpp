// Stock buy and sell leetcode question
/*

    price = [7, 1, 5, 3, 6, 4] 

    The maximum profit you can make is 5.

    buying price should be 1 and the selling price should be 6 to get the hightest profit based on the above array.

*/

#include<iostream>
using namespace std;

int solution(vector<int> prices , int size){
    int max_profit = 0;
    int best_buy = prices[0];

    for(int i = 1; i < size ; i++){
        if(prices[i] > best_buy){
            max_profit = max(max_profit , prices[i] - best_buy);
        }
        best_buy = min(best_buy , prices[i]);
    }
    return max_profit;
}

int main(){

    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int size = sizeof(prices) / sizeof(prices[0]);

    cout << "Maximum profit is : " << solution(prices , size) << endl;

    return 0;
}