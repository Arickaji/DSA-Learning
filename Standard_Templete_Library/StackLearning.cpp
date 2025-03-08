

/*

Stack - LIFO ( Last in First Out )

Stack is work like a normal stakc where the elements are inserted in top and to delete the element at the top of the stack.

*/

#include<iostream>
#include<stack>
using namespace std;

int main(){

    // defining stack variable
    stack<int> s;

    // push() - to insert element in the stack
    s.push(1);
    s.push(2);
    s.push(3);

    // top() - to get the top element of the stack
    cout << "Top element of stack is : " << s.top() << endl; // output : 3
    
    // pop() - to remove the top element from the stack

    s.pop();
    cout << "Top element of stack is : " << s.top() << endl; // output 2

    // empty() - to check wheather the stack is empty or not

    // size() - to get the size of the stack

    // swap() - to swap the elements of the stacks with two different stacks
    
    return 0;
}