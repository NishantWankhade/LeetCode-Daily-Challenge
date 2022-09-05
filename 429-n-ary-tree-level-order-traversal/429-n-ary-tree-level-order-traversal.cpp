/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        if(root == NULL){
              return{};   
        }
        
        vector<vector<int>>ans;
        ans.push_back({root->val}); 
        
        queue<Node*>q;
        q.push(root);
        
        vector<int>a;
        while(!q.empty()){
            
            a.clear();
            int nodes = q.size();
            
            while(nodes--){
                Node* front = q.front();
                q.pop();
                for(auto x : front->children){
                    a.push_back(x->val);
                    q.push(x);
                }
            }
            if(a.size() == 0) continue;
            ans.push_back(a);
            
        }
        
        return ans;
    }
};
