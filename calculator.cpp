#include<iostream>
using namespace std;

bool isPowerOfTwo(int n){
    return (n >= 0 && n & (n - 1)) == 0;
}

int main(){
    int n = 34;
    cout << (isPowerOfTwo(n)==1 ? "Your number is a Power of 2" : "Your number is not a power of 2") << endl;
    return 0;
}

/*
    32 
    10000
    31 
    32 16 8 4 2 1
    0  1  1 1 1 1
*/