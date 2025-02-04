#include <iostream>
#include <cstdlib>    // For abs
#include <algorithm>  // For max

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    
    // Constructors
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    // Helper function that returns the height of the subtree if balanced,
    // or -1 if the subtree is unbalanced.
    int checkHeight(TreeNode* root) {
        // Base case: an empty tree has height 0.
        if (root == NULL) {
            return 0;
        }

        // Check the left subtree.
        int leftHeight = checkHeight(root->left);
        // If left subtree is not balanced, propagate the error.
        if (leftHeight == -1) return -1;

        // Check the right subtree.
        int rightHeight = checkHeight(root->right);
        // If right subtree is not balanced, propagate the error.
        if (rightHeight == -1) return -1;

        // If the current node is not balanced, return -1.
        if (abs(leftHeight - rightHeight) > 1) return -1;

        // Return the height of the current subtree.
        return max(leftHeight, rightHeight) + 1;
    }
    
    // Main function to determine if the tree is balanced.
    bool isBalanced(TreeNode* root) {
        // The tree is balanced if checkHeight doesn't return -1.
        if (checkHeight(root) == -1) {
            return false;
        } else {
            return true;
        }
    }
};

int main() {
    // Construct a sample balanced tree:
    //         1
    //        / \
    //       2   3
    //      / \
    //     4   5
    TreeNode* root = new TreeNode(1);
    root->left      = new TreeNode(2);
    root->right     = new TreeNode(3);
    root->left->left  = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // Create an instance of Solution and check if the tree is balanced.
    Solution sol;
    if (sol.isBalanced(root)) {
        cout << "The tree is balanced." << endl;
    } else {
        cout << "The tree is not balanced." << endl;
    }

    // Clean up allocated memory (for this simple example).
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
