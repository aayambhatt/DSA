#include <iostream>
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

// Returns the root node of the created tree
Node* createTree() {
    cout << "Enter a value (-1 to stop): ";
    int data;
    cin >> data;

    // base case for the recursion
    if (data == -1) {
        return NULL;
    }

    // Step 1: Create a root node 
    Node* root = new Node(data);

    // Step 2: Create left subtree
    cout << "Creating left subtree of " << data << endl;
    root->left = createTree();

    // Step 3: Create right subtree
    cout << "Creating right subtree of " << data << endl;
    root->right = createTree();

    return root;
}

int main() {
    cout << "Start creating the tree" << endl;
    Node* root = createTree();
    cout << "Tree creation complete!" << endl;

    if (root != NULL) {
        cout << "Root of the tree is: " << root->data << endl;
    } else {
        cout << "The tree is empty." << endl;
    }
    return 0;

}
