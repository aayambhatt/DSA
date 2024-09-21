#include<iostream>
#include <stack>
using namespace std;

void explainStacks()
{           
    // stack follows LIFO
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}

    st.emplace(5); //{5,3,2,1}


    cout<<st.top(); // prints 5 // indexing is not allowed 

    st.pop(); // {3,2,1}
    st.size(); // size is 3 
    cout << st.empty(); // false

    stack<int> st1, st2;
    st1.swap(st2);
}

int main()
{
    explainStacks();
 return 0;
}