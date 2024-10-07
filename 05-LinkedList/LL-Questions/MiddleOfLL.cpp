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
        next = next;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }


};

Node* middleNode(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

    }

    return slow;

}
 

int main()
{
 return 0;
}