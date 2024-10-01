#include<iostream>
#include <vector>
using namespace std;

//  a custom data type called Node that groups related data together
struct Node {
    public: // access modifier 
    int data; // data value
    Node* next; // pointer to the next value

    public:
    // constructor 
    Node(int data1, Node* next1){
        data = data1; // Initialize data with the provided value
        next = next1;  // Initialize next with the provided value
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

Node* convertArrayToLL(vector<int> &arr){
    Node* head = new Node(arr[0]); // Create the head node
    Node* mover = head; // Pointer to keep track of the current node

    // Loop through the rest of the array
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]); // Create a new node for each element
        mover->next = temp; // Link the current node to the new node
        mover = temp; // Move to the new node
    }
    return head; // Return the head of the linked list
}

int lengthOfLL(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp){
    temp = temp->next;
    count++;
}
    return count;
}

// check if element is present
int checkIfPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data==val){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

int main()
{

vector<int> arr={2,5,8,7};
Node* head = convertArrayToLL(arr);

cout << head->data; // outputs 2 

// traversal 
Node* temp = head;
while(temp){
cout << temp->data << " ";
temp = temp->next;
}


}







