class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>ans;
        map<int,int>odd,even;
        
        for(auto x : changed){
            if(x % 2 != 0){
                odd[x]++;
                ans.push_back(x);
            }
            else even[x]++;
        }
        
        for(auto x : odd){
            if(even[2*x.first] < x.second) return {};
            else even[2*x.first] -= x.second;
        }
        
        // for(auto x:ans) cout<<x<<" ";
        // for(auto x:even) (x.second > 0) ? cout<<x.first<<" " : cout<<0;
        
        for(auto x : even){
            if(x.second > 0){
                if(x.first == 0){
                    if( x.second % 2 == 0){vector<int>a(x.second/2,0);
                    ans.insert(ans.end(),a.begin(),a.end());}
                    else return {};
                }
                else if(even[2*x.first] < x.second){
                    return {};
                }
                else{
                    vector<int>a(x.second,x.first);
                    ans.insert(ans.end(),a.begin(),a.end());
                    even[2*x.first] -= x.second;
                }
            }
        }
        
        return ans;
    }
};