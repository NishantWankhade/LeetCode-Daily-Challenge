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
    int dfs(map<int,int> & a,TreeNode*root){
        a[root->val]++;
        if(root->left == NULL and root->right == NULL){
            int b = 0;
            for(auto x : a){
                if(x.second % 2 != 0) {
                    b++;
                }
            }
            a[root->val]--;
            if(b < 2) return 1;
            return 0;
        }
        
        int ans = 0;
        if(root->right != NULL){
            ans += dfs(a,root->right);
        }
        
        if(root->left != NULL){
            ans += dfs(a,root->left);
        }
        a[root->val]--;
        return ans;
    }
    
    int pseudoPalindromicPaths (TreeNode* root) {
        map<int,int> a;
        return dfs(a,root);
    }
};