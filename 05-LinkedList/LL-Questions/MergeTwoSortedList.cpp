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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Step 1: Create a dummy node
        ListNode* dummyNode = new ListNode(-1);
        ListNode* tail = dummyNode;

        // Step 2: Traverse both lists and merge them
        while(list1 && list2){
            if(list1->val <= list2->val){
                tail->next = list1;  // Append smaller node to the result
                list1 = list1->next; // Move the list1 pointer
            }
            else {
                tail->next = list2;  // Append smaller node to the result
                list2 = list2->next; // Move the list2 pointer
            }
            tail = tail->next;  // Move the result pointer forward
        }

        // Step 3: Append remaining nodes
        if(list1) {
            tail->next = list1;
        } else if(list2) {
            tail->next = list2;
        }

        return dummyNode->next;  // Return the head of the merged list
    }
};




int main()
{
 return 0;
}