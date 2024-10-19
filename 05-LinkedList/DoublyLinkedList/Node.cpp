#include<iostream>
#include <vector>
using namespace std;


//  a custom data type called Node that groups related data together
struct Node {
    public: // access modifier 
    int data; // data value
    Node* next; // pointer to the next value
    Node* back;

    public:
    // constructor 
    Node(int data1, Node* next1, Node* back1){
        data = data1; // Initialize data with the provided value
        next = next1;  // Initialize next with the provided value
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

};

//Convert array to DLL
Node* arrayToDLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 0; i<arr.size() ; i++){
        Node* temp = new Node(arr[0], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
        return head;

}

// Delete the head from DLL 
Node* deleteHead(Node* head){

    if(head==NULL || head->next == NULL){
        return NULL;
    }

    Node* prev = head;
    head = head->next;
    head->back=nullptr;
    prev->next = nullptr;
    
    delete prev;
    return head;
}

//Delete tail of DLL 
Node* deleteTail(Node* head){
    if(head==NULL || head->next == NULL){
        return NULL;
    }

    Node* tail = head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* newTail = tail->back;
    newTail->next = nullptr;
    tail->back = nullptr;
    delete tail;
    return head; 

}

Node* deleteKthElement(Node* head, int k){
    if(head==NULL){
        return NULL;
    }

    int count = 0;
    Node* kNode = head;

    while(kNode!=NULL){
        count++;
        if(count==k){
            break;
        }
        else{
            kNode=kNode->next;
        }
    }

    Node* prev = kNode->back;
    Node* front = kNode->next;


    // edge cases now
    if(prev == NULL && front==NULL){
        return NULL;
    }
    //at the head 
    else if(prev=NULL){
       return deleteHead(head);
    }
    // at the tail    
    else if(front==NULL){
        return deleteTail(head);
    }
    prev->next = front;
    front->back=prev;
    
    kNode->next=nullptr;
    kNode->back=nullptr;
    delete kNode;

    return head;  

 }

 // Delete Node from a DLL 

 void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;

    // edge cases 
    if(front==NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        free (temp);

        return;
    }

    prev->next = front;
    front->back=prev;
    
    temp->next=temp->back= nullptr;
    free (temp);

 }


 // insert before head
 Node* insertBeforeHead(Node* head, int val){
    Node* newHead = new Node(val,head,nullptr);
    head->back = newHead;

    return newHead;
 }

 //insert before tail
 Node* insertBeforeTail(Node* head, int val){

    if(head->next=NULL){
        return insertBeforeHead(head, val);
    }
    Node* tail = head;
    while(tail->next!=NULL){
        tail=tail->next;
    }

    Node* prev = tail->back;
    Node* newNode = new Node(val,tail,prev);
    prev->next = newNode;
    tail->back=newNode;

    return head;
    
 }

 //insert before kth element 
 Node* insertBeforeKthElement(Node* head, int k, int val){
    if(k==1){
        return insertBeforeHead(head, val);
    }
    //if not the head
    Node* temp = head;
    int count = 0;

    while(temp!=NULL){
        count++;
        if(count==k){
            break;
        }
        temp=temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val,temp, prev);

    prev->next = newNode;
    temp->back = newNode;

    return head;
        
  }

 //insert before Node
 void insertBeforeNode(Node* node, int val){
    Node* prev = node->back;
    Node* newNode = new Node(val, node, prev);

    prev->next = newNode;
    node->back= newNode;
 }

        
int main()
{
 return 0;
}
    





 







