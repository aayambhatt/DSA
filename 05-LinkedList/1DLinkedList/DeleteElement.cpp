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

Node* DeleteEl(Node* head, int el){
    if(head==NULL){
        return head;
    }
    if(head->data==el){
        Node* temp = head;
        head=head->next;
        delete temp;
        
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;

    while(temp!=NULL){
        if(temp->data==el){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
        
}



int main()
{
 return 0;
}