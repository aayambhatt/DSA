#include<iostream>
using namespace std;


class Node {
public: 
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

class Solution {
public:
    int maxDepth(Node* root) {
       if (root ==NULL) {
            return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
        
    }
};



int main()
{
 return 0;
}