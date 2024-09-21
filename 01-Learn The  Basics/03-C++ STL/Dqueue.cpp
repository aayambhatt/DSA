#include<iostream>
#include <deque>
using namespace std;

void explainDqueue(){
    deque<int> Dq;
    Dq.push_back(1); // {1}
    Dq.emplace_back(2); // {1,2}
    Dq.push_front(3); // {3,1,2}

    Dq.emplace_back(5); // {3,1,2,5}

    Dq.pop_front(); // {1,2,5}


    // rest functions are same as vector 
    
    
}

int main()
{
 return 0;
}