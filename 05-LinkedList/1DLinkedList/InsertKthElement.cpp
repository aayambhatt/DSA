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

Node* InsertKth(Node* head, int el, int k){
    // edge cases 
    if(head==NULL){
        if(k==1){
            return new Node(el);
        }
    }
    if(k==1){
        Node* temp = new Node(el,head);
        return temp;  
    }

    // for rest kth places 
    int count = 0;
    Node* temp = head;
    while(temp!=NULL){
        count++;

        if(count==k-1){
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