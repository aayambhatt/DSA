#include<iostream>
#include <set>
using namespace std;

void explainSet(){
    // stores everything in a storted order, and stores unique
    set<int> st;

    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

    auto it = st.find(3); // returns an iterator which points to the 3
    // if an element is not present, then it will always return set.end(); 

    st.erase(5); // deletes 5 and maintains the sorted order 

    auto it = st.find(3);
    st.erase(it);

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // deletes 2 and 3 [first, last)


    // functions work in the same way as vector does

    auto it1 = st.lower_bound(2);
     auto it2 = st.upper_bound(3);

     
    
}

int main()
{
    
 return 0;
}