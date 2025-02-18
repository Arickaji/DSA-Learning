// vector array  = { 1, 2, 2 , 1 , 1 }
// task is to find the most frequent number with more than n/2 appearing

#include<iostream>
#include<vector>
using namespace std;

int BruthForceApproach(vector<int> arr){
    int n = arr.size();

    for(int val: arr){
        int count = 0;
        for(int el: arr){
            if(el == val){
                count++;
            }
        }

        if(count > (n / 2)){
            return val;
        }
    }

    return -1;
}

int OptimalApproach(vector<int> arr){
    // sorting
    sort(arr.begin() , arr.end());
    int size = arr.size();
    // logic for loop
    int count = 1 , ans = arr[0];

    for(int i = 1 ; i < size; i++){
        if(arr[i] == arr[i-1]){
            count++;
        } else { 
            count = 1;
            ans = arr[i];
        }

        if(count > ( size / 2 )){
            return ans;
        }
    }
    return -1;
}

int MooreOptimalSolution(vector<int> arr){
    int fre = 0 , ans = 0;
    int size = arr.size();

    for(int i = 0 ; i < size; i++){
        if(fre == 0){
            ans = arr[i];
        }
        if(ans == arr[i]){
            fre++;
        }else{
            fre--;
        }
    }

    return ans;

}
int main(){
    vector<int> arr = { 1, 2, 2 , 1 , 1 };
    int BruthForceAns = BruthForceApproach(arr);
    int OptimalSolution = OptimalApproach(arr);
    int MooreSolution = MooreOptimalSolution(arr);

    cout << "Bruth Force Approach Answer : " << BruthForceAns << endl;
    cout << "Optimal Solution : " << OptimalSolution << endl;
    cout << "Moore's Algorithm Solution : " << MooreSolution << endl;    
    return 0;
}