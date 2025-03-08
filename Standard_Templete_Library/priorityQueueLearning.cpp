

/*

Priority Queue : it work on the binary tree structure.

Minheap - where the minimum value will be at the top 
Maxheap - where the maximum value will be at the top


*/

#include<iostream>
#include<queue>
using namespace std;

int main(){

    // defining priority queue variable
    
    priority_queue<int> q; // normal priority queue // deceding order priority queue 

    priority_queue<int, vector<int>, greater<int>> q2; // ascedning order priority queue


    // push() - to insert element in the priority queue

    q.push(1); // push
    q.push(10); // push
    q.push(5); // push

    // pushing element in asceding order priority queue
    q2.push(1); // push
    q2.push(10); // push
    q2.push(5); // push

    // top() - to get the top element of the priority queue

    // in the priority queue by default it will store like 10 , 5 , 1

    cout << "Descending order priority queue : "; 
    while(!q.empty()){
        cout << q.top() << " ";
        q.pop(); // pop the element with highest priority
    } // output 10 5 1
    cout << endl;

    cout << "Ascending order priority queue : "; 
    while(!q2.empty()){
        cout << q2.top() << " " ;
        q2.pop(); 
    } // output 1 5 10
    cout << endl;

    return 0;
}