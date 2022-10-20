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
public:
    int dfs(TreeNode* root){
        int ans = 1;
        if(root == NULL) return 0;
        if(root->left != NULL) ans = max(ans, dfs(root->left)+1);
        if(root->right != NULL) ans = max(ans,dfs(root->right)+1);
        return ans;
    }
    int maxDepth(TreeNode* root) {
        int ans = dfs(root);
        return ans;
    }
};