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
        int countNodes(TreeNode* root) {
            // base case
            if(root==NULL){
                return 0;
            }
    
            // recursive case
            return 1 + countNodes(root->left) + countNodes(root->right);
            
        }
    };

int main()
{
 return 0;
}