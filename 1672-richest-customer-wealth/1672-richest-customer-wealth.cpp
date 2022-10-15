class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for(auto x : accounts){
            int s = 0;
            for(auto y : x){
                s += y;
            }
            ans = max(ans,s);
        }
        return ans;
    }
};