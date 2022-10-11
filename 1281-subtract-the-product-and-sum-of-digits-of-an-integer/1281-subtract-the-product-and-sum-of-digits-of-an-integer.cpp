class Solution {
public:
    int subtractProductAndSum(int n) {
        long long product = 1;
        long long sum = 0;
        
        while(n > 0){
            product *= (n % 10);
            sum += (n % 10);
            n /= 10;
        }
        
        int ans = product - sum;
        
        return ans;
    }
};