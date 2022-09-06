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
    
    bool ans(TreeNode* node){
        if(node == NULL) return false;
        
        bool left = ans(node->left);
        bool right = ans(node->right);
        
        if(!left) node->left = NULL;
        if(!right) node->right = NULL;
        
        return node->val == 1 || left || right;
    }
    
    TreeNode* pruneTree(TreeNode* root) {
        return ans(root) ? root : NULL;
    }
    
    
};