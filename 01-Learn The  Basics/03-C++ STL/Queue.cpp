#include<iostream>
#include <queue>
using namespace std;

void explainQueue(){

// First in first out FIFO
queue<int> q;

q.push(1); // {1}
q.push(2); // {1,2}
q.emplace(3); // {1,2,3}

cout << q.back(); // prints 3

q.pop(); // {2,3}

// size, swap, empty same as stack

}

int main()
{
 return 0;
}