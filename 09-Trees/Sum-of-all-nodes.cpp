#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; 

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    int sumBT(Node* root) {
        // base case
        if(root==NULL){
            return 0;
        }
        
        // recursive case
        return root->data + sumBT(root->left) + sumBT(root->right);
        
        
    }
};

int main()
{
 return 0;
}