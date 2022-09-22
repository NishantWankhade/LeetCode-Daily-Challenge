class Solution {
public:
    string reverseStr(string s, int k) {
        int i = 0;
        for(i = 0 ; i < s.size();){
            if(i+k < s.size()){
                reverse(s.begin()+i,s.begin()+i+k);
                i += 2*k;
            }
            else break;
        }
        if(i != s.size()){
            reverse(s.begin()+i,s.end());
        }
        return s;
    }
};