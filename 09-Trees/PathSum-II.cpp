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
    
    void solve(TreeNode* root, int targetSum, vector<vector<int>> &ans, vector<int> temp, int sum ){
            // Base case: If the current node is NULL, return
            if(root==NULL){
                return;
            }

            // Add the current node's value to sum and store it in temp path
            sum = sum + root->val;
            temp.push_back(root->val);

            // Check if it's a leaf node
            if(root->left == NULL && root->right == NULL){
                // If the sum matches targetSum, add path to ans
                if(sum==targetSum){
                    ans.push_back(temp);
                }
                else{
                    return; // Otherwise, return as it's not a valid path
                }
            }

            // Recursively call for left and right subtrees
            solve(root->left, targetSum, ans, temp, sum);
            solve(root->right, targetSum, ans, temp, sum);
    }

    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
            vector<vector<int>> ans; // Store all valid paths
            vector<int> temp; // Temporary vector to store current path
            int sum = 0; // Initialize sum to track path sum

            solve(root, targetSum, ans, temp, sum); // Start recursion
            return ans; // Return the final result
    }
};




int main()
{
 return 0;
}