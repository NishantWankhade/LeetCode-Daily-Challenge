class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>a(nums.size(),0);
        int j = 0;
        for(int i = 0; i < nums.size();){
            if(j >= nums.size()) break;
            if(nums[j] == 0){ j++;continue;}
            else{
                a[i] = nums[j];
                i++;
            }
            j++;
        }
        nums = a;
    }
};