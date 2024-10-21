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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {   
        ListNode* dummyNode = new ListNode(-1);
        ListNode* current = dummyNode;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;   
        int carry = 0;

        while (temp1 != NULL || temp2 != NULL || carry > 0) {
            int sum = carry;

            if (temp1) {
                sum += temp1->val;
                temp1 = temp1->next;  // Move to the next node
            }
            if (temp2) {
                sum += temp2->val;
                temp2 = temp2->next;  // Move to the next node
            }

            carry = sum / 10;  // Calculate carry
            ListNode* newNode = new ListNode(sum % 10); // Create a new node with the sum's unit place
            current->next = newNode;  // Link the new node
            current = newNode;  // Move current to the new node
        }
        return dummyNode->next; // Return the head of the new list
    }
};



int main()
{
 return 0;
}