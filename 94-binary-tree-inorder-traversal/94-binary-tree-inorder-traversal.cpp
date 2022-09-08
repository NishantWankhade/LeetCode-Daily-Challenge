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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root == NULL){return ans;}
        if(root->left == NULL and root->right == NULL){
            ans.push_back(root->val);
            return ans;
        }
        
        vector<int>a = inorderTraversal(root->left);
        vector<int>b = inorderTraversal(root->right);
        
        ans.insert(ans.end(),a.begin(),a.end());
        ans.push_back(root->val);
        ans.insert(ans.end(),b.begin(),b.end());
        
        return ans;
    }
};