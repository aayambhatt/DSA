#include<iostream>
#include<stack>
using namespace std;

class MinStack {
public:
    
    stack<int> st;
    stack<int> minSt;

    void push(int val) {
       st.push(val);
       
       if(minSt.empty() || val<=minSt.top()){
            minSt.push(val);
       }
       else{
            minSt.push(minSt.top());
       }
       
    }
    
    void pop() {
        st.pop();
        minSt.pop();

    }
    
    int top() {
       return st.top();


    }
    
    int getMin() {
        return minSt.top();
        
    }   
};


int main()
{
 return 0;
}