class Solution {
public:
    string reverseWords(string s) {
        string ans;
        stack<char>st;
        
        for(auto x : s){
            if(x != ' '){
                st.push(x);
                continue;
            }
            else{
                while(!st.empty()){
                    ans += st.top();
                    st.pop();
                }
                ans += ' ';
            }
            
        }
        while(!st.empty()){
                    ans += st.top();
                    st.pop();
        }

        return ans;
    }
};