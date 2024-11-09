#include<iostream>
#include <stack>
using namespace std;


class MyQueue {
public:
    stack<int> st1;  // Used for pushing elements
    stack<int> st2;  // Used for popping and peeking

    // Push element x to the back of the queue.
    void push(int x) {
        st1.push(x);
    }
    
    // Removes the element from the front of the queue and returns it.
    int pop() {
        // If st2 is empty, we move all elements from st1 to st2
        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        
        // Now pop the top element from st2 (front of the queue)
        int front = st2.top();
        st2.pop();
        return front;
    }
    
    // Get the front element.
    int peek() {
        // If st2 is empty, move all elements from st1 to st2
        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        
        // Return the top element of st2 (front of the queue)
        return st2.top();
    }
    
    // Returns whether the queue is empty.
    bool empty() {
        return st1.empty() && st2.empty();
    }
};

int main()
{
 return 0;
}





