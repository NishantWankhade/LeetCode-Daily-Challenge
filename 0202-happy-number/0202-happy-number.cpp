class Solution {
public:
    bool isHappy(int n) {
        if(n == 1) return true;
        map<int,int>mp;
        mp[n]++;
        while( n > 0){
            if(mp[n] > 1) return false;
            
            long long a = n;
            long long sum = 0;
            while( a > 0){
                sum += (a % 10) * (a % 10);
                a /= 10;
            }
            n = sum;
            if(n == 1 ) return true;
            mp[n]++;
        }
        return false;
    }
};