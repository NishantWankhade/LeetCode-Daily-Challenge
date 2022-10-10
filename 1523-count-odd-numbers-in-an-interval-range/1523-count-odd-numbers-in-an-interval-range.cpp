class Solution {
public:
    int countOdds(int low, int high) {
        int ans = 0;
        if(low == high){
            if(low % 2 != 0)return 1;
            return 0;
        }
        if(low % 2 != 0 and high % 2 != 0){
            ans += 2;
            ans += (high-low)/2;
            ans--;
            return ans;
        }
        if(high % 2 == 0 and low % 2 == 0){
            ans += (high-low)/ 2;
            return ans;
        }
        else{
            ans += 1;
            ans += (high-low)/ 2;
            return ans;
        }
    }
};