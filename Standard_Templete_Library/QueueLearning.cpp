
/*

Queue : FIFO ( First In First Out )

Queue is work like first in first out.

*/

#include<iostream>
#include<queue>
using namespace std;

int main(){

    // defining queue variable
    queue<int> q;
    
    // push() - to insert element in the queue 
    q.push(1);
    q.push(2);
    q.push(3);

    // front() - to get the front element of the queue
    cout << "Front element of the queue : " << q.front() << endl;

    // pop() - this will remove the first element from the queue 
    q.pop();

    cout << "Front element of the queue after pop() : " << q.front() << endl; // output 2

    // size() - to get the size of the queue
    cout << "Size of the queue : " << q.size() << endl; // output 1

    // empty() - to check wheather the queue is empty or not

    // swap() - to swap the elements of the queues with two different queues


    return 0;
}