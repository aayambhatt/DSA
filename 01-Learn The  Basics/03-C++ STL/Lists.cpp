#include<iostream>
#include <bits/stdc++.h>
#include <utility>
#include <list>
using namespace std;

void explainLists(){

    // A doubly linked list that supports efficient insertions and deletions at any position.

    list <int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5,2,4} // a doubly linked list is maintained while for vector a singly linked list is maintained hence its costlier


    ls.emplace_front(); 

    // rest functions are same as in vector, 
    //begin, end, clear, insert, size, swap

}

int main()
{
 return 0;
}