#include<iostream>
using namespace std;


struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
    public:
        ListNode* reverseKGroup(ListNode* head, int k) {
            ListNode* node = head;
            int count = 0;
            while(node!=NULL && count<k){
                node = node->next;
                count++;
            }
    
            if(count<k){
                return head;
            }
    
            ListNode* temp = head;
            ListNode* prev = NULL;
            int i = 0;
    
            while(temp!=NULL && i<k){
                ListNode* front = temp->next;
                temp->next = prev;
                prev = temp;
                temp = front;
                i++;
            }
    
            head->next = reverseKGroup(temp, k);
    
            return prev;
            
        }
    };

int main()
{
 return 0;
}