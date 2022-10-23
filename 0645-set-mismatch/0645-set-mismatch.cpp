class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<int,int>mp;
        int ans = 1;
        int ans2 = 1;
        for(auto x : nums){
            if(mp[x] != 0) ans = x;
            mp[x]++;
            if(x == ans2)ans2++;
        }
        return {ans,ans2};
    }
};