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

Node* removesHead(Node* head){
    Node* temp = head;
    head = head->next;
    delete temp;
    
    return head;

}


int main()
{
 return 0;
}