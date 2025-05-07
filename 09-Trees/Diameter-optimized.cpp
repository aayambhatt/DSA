#include<iostream>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
    public:
        int diameter = 0;
    
        int height(TreeNode* root){
            if(root==NULL){
                return 0;
            }
    
            int left = height(root->left);
            int right = height(root->right);
    
            diameter = max(diameter, left+right); // update global diameter
    
            return 1 + max(left, right); // height of current node
        }
    
        int diameterOfBinaryTree(TreeNode* root) {
            height(root);
            return diameter;
            
        }
    };

int main()
{
 return 0;
}