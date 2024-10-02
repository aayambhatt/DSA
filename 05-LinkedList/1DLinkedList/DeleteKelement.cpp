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

Node* deleteKelement(Node* head, int k){
    
    // edge cases
    if(head==NULL){
        return head;
    }
    if(k==1){
        Node* temp = head;
        head=head->next;
        delete temp;

        return head;
    }

    // for other elements
    int count = 0;
    Node* temp = head;
    Node* prev=NULL;

    while(temp!=NULL){
        count++;
        
        if(count==k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }

    return head;


}


int main()
{
 return 0;
}