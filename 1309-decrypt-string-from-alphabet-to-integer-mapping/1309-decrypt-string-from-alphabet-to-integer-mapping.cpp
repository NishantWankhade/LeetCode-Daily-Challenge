class Solution {
public:
    char sendChar(int i){
        return char(i+'a'-1);
    }
    string freqAlphabets(string s) {
        stack<int>st;
        
        for(auto x : s){
            if(st.empty()){
                st.push(x-'0');
            }
            else{
                if(x == '#'){
                    char f = st.top();
                    st.pop();
                    
                    char l = st.top();
                    st.pop();
                    
                    int a = l*10+f;
                    
                    st.push(a);
                }
                else{
                    st.push(x-'0');
                }
            } 
        }
        int n = st.size();
        string ans(n,'0'); 
        int i = st.size()-1;
        while(!st.empty()){
            ans[i] = sendChar(st.top());
            i--;
            // cout<<st.top()<<" ";
            st.pop();
        }
        // cout<<endl;
        return ans;
        
    }
};