class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        if(s1 == s2) return true;
        
        map<char,int>mp;
        
        for(auto x : s1){
            mp[x]++;
        }
        for(auto x : s2){
            mp[x]--;
        }
        
        for(auto x : mp){
            if(x.second != 0) return false;
        }
        
        int count = 0;
        
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i]) count++;
        }
        
        if(count == 2 or count == 0) return true; 
        
        return false;
    }
};