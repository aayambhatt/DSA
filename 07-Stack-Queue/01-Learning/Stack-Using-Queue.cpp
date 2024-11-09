#include<iostream>
#include <queue>
using namespace std;


class MyStack{

public:
    queue<int> q;

    void push(int x) {
    int s = q.size();    // Step 1: Get the current size of the queue
    q.push(x);           // Step 2: Add the new element to the queue

    // Step 3: Rearrange elements to maintain LIFO order
    for (int i = 0; i < s; i++) {
        q.push(q.front());   // Add the front element to the end of the queue
        q.pop();              // Remove the front element from the queue
    }
}

    int pop(){
        int topElement = q.front();
        q.pop();
        return topElement;
    }

    int top(){
        return q.front();
    }

    bool empty(){
        return q.empty();
    }


};



int main()
{
 return 0;
}


