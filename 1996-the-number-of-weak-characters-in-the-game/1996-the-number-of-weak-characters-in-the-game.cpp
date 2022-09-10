class Solution {
public:
    
    static bool compare(vector<int> & a, vector<int> & b){
        if(a[0] != b[0]) return a[0] > b[0];
        return a[1] < b[1];
    }
    
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int ans = 0;
        sort(properties.begin(), properties.end(),compare);
        
        int mini = properties[0][1];
        
        for(int i = 0; i < properties.size(); i++){
            if(mini > properties[i][1])ans++;
            else mini = properties[i][1];
        }
        
        return ans;
    }
};