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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        
        map<int,map<int,vector<int>>>mp;
        mp[0][0].push_back(root->val);
        while(!q.empty()){
            TreeNode* front = q.front().first;
            int count = q.front().second.first;
            int height = q.front().second.second;
            
            if(front->left != NULL){
                q.push({front->left,{count-1,height+1}});
                mp[count-1][height+1].push_back(front->left->val);
            }
            if(front->right != NULL){
                q.push({front->right,{count+1,height+1}});
                mp[count+1][height+1].push_back(front->right->val);
            }
            
            q.pop();
        }
        vector<vector<int>>ans;
        for(auto x: mp){
            vector<int>s;
            for(auto y : x.second){
                vector<int>s1(y.second.begin(),y.second.end());
                sort(s1.begin(),s1.end());
                s.insert(s.end(),s1.begin(),s1.end());  
            }
            ans.push_back(s);
        }
        
        return ans;
    }
};