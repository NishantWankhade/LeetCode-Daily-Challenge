class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        if((x1 == 0 and x2 == 0) || x1 == x2){
            int same = x1;
            for(auto x : coordinates){
                if(x[0] != same) return false;
            }
            return true;
        }
        if((y1 == 0 and y2 == 0) || y1 == y2){
            int same = y1;
            for(auto x: coordinates){
                if(x[1] != same) return false;
            }
            return true;
        }
        double slope = (y2-y1)/(x2-x1); 
        if(coordinates.size() == 2) return true;
        
        for(int i = 2; i < coordinates.size(); i++){
            int x1 = coordinates[i-1][0];
            int y1 = coordinates[i-1][1];
            int x2 = coordinates[i][0];
            int y2 = coordinates[i][1];
            if(x1 == x2) return false;
            if(y1 == y2) return false;
            double slope1 = (y2-y1)/(x2-x1); 
            if(slope1 != slope) return false;
        }
        
        return true;
    }
};