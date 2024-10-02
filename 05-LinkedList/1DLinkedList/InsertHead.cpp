#include<iostream>
#include<vector>
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

Node* insertAtHead(Node* head, int val){
        
    Node* temp = new Node(val, head);
    return temp;

}




int main()
{
 return 0;
}