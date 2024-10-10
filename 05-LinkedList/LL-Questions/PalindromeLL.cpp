#include<iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* reverseLL(ListNode* head) {
    ListNode* temp = head;   // Current node
    ListNode* prev = NULL;   // Previous node, initially NULL as the new end will point to NULL

    while (temp != NULL) {   // Traverse until we reach the end
        ListNode* front = temp->next; // Save the next node
        temp->next = prev;   // Reverse the current node's pointer
        prev = temp;         // Move 'prev' one step forward
        temp = front;        // Move 'temp' to the next node
    }
    return prev; // 'prev' will be the new head of the reversed list
}

bool isPalindrome(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    // Find the middle using the slow and fast pointers
    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Reverse the second half of the list
    ListNode* newHead = reverseLL(slow->next);
    ListNode* first = head;
    ListNode* second = newHead;
    
    // Compare both halves
    while (second != NULL) {
        if (first->val != second->val) {
            reverseLL(newHead); // Restore the original list order
            return false;
        }
        first = first->next;
        second = second->next;
    }
    
    reverseLL(newHead); // Restore the original list order
    return true;
}




int main()
{
 return 0;
}