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

Node* reverseLL(Node* head){
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
     Node* front = temp->next;
     temp->next = prev;
     prev = temp;
     temp = front;   
    }
    return  prev;
}



int main()
{
 return 0;
}