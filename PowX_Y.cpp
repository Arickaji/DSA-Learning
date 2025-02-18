// pow ( x , n ) leetcode medium question 

#include<iostream>
using namespace std;


double pow(double x , int n){

    // constant values
    if(n == 0) return 1.0;
    if(x == 0) return 0.0;
    if(x == 1) return 1.0;
    if(x == -1 && n % 2 == 0) return 1.0;
    if(x == -1 && n % 2 == 1) return -1.0;

    long binForm = n;

    if (n < 0){
        x = 1 / x;
        binForm = -n;
    }

    double ans = 1;

    while ( binForm > 0 ){
        if ( binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;  // removing last bit of binary form 2^0 = 1, 2^1 = 2, 2^2 = 4, 2^3 = 8, 2^4 = 16, 2^5 = 32, 2^6 = 64, 2^7 = 128, 2^8 = 256.....
    }
    return ans;
}

int main(){

    double x = 2.00000;
    int n = 10;

    cout << "result is : " << pow(x , n) << endl;
    return 0;
}