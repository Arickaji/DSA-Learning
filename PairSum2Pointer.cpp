// pair sum 

// vector arr = { 2, 7, 11, 15 } target = 9 

// so the answer should be 2 , 7 or the index value of the answers which is 0 ,1

// to solve this problem under 0(n) we are going to solve this problem using 2 pointer s approach

#include<iostream>
#include<vector>
using namespace std;

vector<int> Pointer2Sum(vector<int> arr , int target){
    vector<int> ans;
    int size = arr.size();
    int start = 0;
    int end = size - 1;
    
    while(start < end){
        int sum = arr[start] + arr[end];
        if(sum == target){
            ans.push_back(arr[start]);
            ans.push_back(arr[end]);
            return ans;
        }else if(sum < target){
            start++;
        }else{
            end--;
        }
    }
    return ans;
}



int main(){
    vector<int> arr = { 2, 7, 11, 15 };
    int target = 9;
    vector<int> ans = Pointer2Sum(arr, target);

    cout << "Pair sum which equals to " << ans[0] << " and " << ans[1] << endl;
    return 0;
}