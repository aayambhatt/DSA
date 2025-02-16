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
      TreeNode* invertTree(TreeNode* root) {
          // base case 
          if(root==NULL){
              return 0;
          }
  
          // swap
          TreeNode* temp = root->left;
          root->left = root->right;
          root->right = temp;
  
          // recursiverly call the invert tree function for left and right subtree
          invertTree(root->left);
          invertTree(root->right);
  
          return root;
  
      
      }
  };

int main()
{
 return 0;
}