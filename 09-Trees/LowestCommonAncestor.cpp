#include<iostream>
using namespace std;

struct TreeNode {
  int val;
 TreeNode *left;
 TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    public:
        TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            // Base Case 1: If the current node is NULL, there's nothing to process.
            if (root == NULL) {
                return NULL;
            }
            // Base Case 2: If the current node is either p or q, return it.
            if (root == p) return p;
            if (root == q) return q;
            
            // Recurse on the left and right subtrees.
            TreeNode* left = lowestCommonAncestor(root->left, p, q);
            TreeNode* right = lowestCommonAncestor(root->right, p, q);
    
            // If neither subtree returned a node, neither p nor q was found below.
            if (left == NULL && right == NULL) {
                return NULL;
            }
            // If only one subtree has one of p or q, return that one.
            else if (left != NULL && right == NULL) {
                return left;
            }
            else if (left == NULL && right != NULL) {
                return right;
            }
            // If both subtrees returned a non-null value, then p and q are in different subtrees,
            // so the current node is their lowest common ancestor.
            else {
                return root;
            }
        }
    };
    


int main()
{
 return 0;
}