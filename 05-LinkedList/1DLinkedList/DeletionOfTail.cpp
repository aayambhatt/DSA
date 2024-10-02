#include<iostream>
#include <vector>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    
    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

Node* deleteTail(Node* head) {
    // Case: If list is empty or has only one node, return NULL
    if(head == NULL || head->next == NULL) {
        delete head; // Use delete instead of free
        return NULL;
    }

    Node* temp = head;
    // Traverse until the second-to-last node
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    // Delete the last node and set the second-to-last node's next to NULL
    delete temp->next;
    temp->next = NULL;

    return head;
}





int main()
{
 return 0;
}