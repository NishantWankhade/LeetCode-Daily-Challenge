class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a;
        for(auto x : nums1){
            int j = nums2.size()-1;
            int ans = -1;
            while(j >= 0 and nums2[j] != x){
                if(nums2[j] > x){
                    ans = nums2[j];
                }
                j--;
            }
            a.push_back(ans);
        }
        return a;
    }
};