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
        void inOrder(TreeNode* root, vector<int> &ans){
            // base case 
            if(root==NULL){
                return;
            }
    
            //LNR
            //L
            inOrder(root->left, ans);
            //N
            ans.push_back(root->val);
            //R
            inOrder(root->right, ans);
    
        }
    
        vector<int> inorderTraversal(TreeNode* root) {
            vector<int> ans;
            inOrder(root, ans);
            return ans;
    
            
        }
    };


int main()
{
 return 0;
}