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

Node* InsertBeforVal(Node* head, int el, int val){
    // edge cases 
    if(head==NULL){
       return NULL;
    }
    if(head->data==val){
        Node* temp = new Node(el,head);
        return temp;  
    }

    Node* temp = head;
    while(temp->next!=NULL){


        if(temp->next->data==val){
            Node* x= new Node(el);
            x->next = temp->next;
            temp->next = x;
            break;
        }

        temp = temp->next;

    }   

    return head;

}





int main()
{
 return 0;
}