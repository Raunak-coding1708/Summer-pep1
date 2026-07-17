/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private:
        vector<vector<int>> result;

        void dfs(TreeNode* node, int remSum, vector<int>& curr){

        
        if(node == NULL)return;
        curr.push_back(node->val);

        if(node->left == NULL && node->right == NULL)
        {
            if(node->val == remSum){
                result.push_back(curr);
            }
        }
        else{
            dfs(node->left, remSum - node->val, curr);
            dfs(node->right, remSum-node->val, curr);
        }
        curr.pop_back();
    }
    public:
        vector<vector<int>> pathSum(TreeNode* root, int targetSum){
            result.clear();
            vector<int>curr;
            dfs(root, targetSum, curr );
            return result;
        }

};