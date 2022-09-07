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
    string tree2str(TreeNode* root) {
        string ans = to_string(root->val);
        
        if(root->left == NULL and root->right == NULL) return ans;
        string a ;
        if(root->left == NULL){
            a = "()";
        }
        if(root->left != NULL){
            a =  "("+tree2str(root->left)+")";
        }
        if(root->right != NULL){
            a += "("+tree2str(root->right) + ")";
            if(a.size() == 2) a += "";
        }
        return ans + a;
    }
};