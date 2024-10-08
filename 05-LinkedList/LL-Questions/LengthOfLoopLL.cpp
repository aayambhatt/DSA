#include<iostream>
using namespace std;


struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }


};




class Solution {
  public:
  
    int findLength(Node* slow, Node* fast){
    
    int cnt = 1;
    
    // move fast by one step
    fast = fast->next;
    while(slow!=fast){
        
        cnt++;
        fast = fast->next;
    }
    
    return cnt;
}
  
    int countNodesinLoop(Node *head) {
        // Code here
        Node* slow = head;
        Node* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return findLength(slow,fast);
            }
        }
        
        return 0;
    }
};



int main()
{
 return 0;
}