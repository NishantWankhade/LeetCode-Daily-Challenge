class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        
        int i = 0;
        int minDist = 0;
        int ans = -1;
        while(i < points.size()){
            if(points[i][0] != x and points[i][1] != y){
                i++;
                continue;
            }
            else{
                int xmin = points[i][0]-x;
                int ymin = points[i][1]-y;
                
                minDist = abs(xmin)+abs(ymin);
                ans = i;
                break;
            }   
        }
        
        while(i < points.size()){
            if(points[i][0] != x and points[i][1] != y){
                i++;
                continue;
            }
            int xmin = points[i][0]-x;
            int ymin = points[i][1]-y;

            int dist = abs(xmin)+abs(ymin);
            if(minDist > dist){
                minDist = dist;
                ans = i;
            }
            i++;
        }
        
        return ans;
    }
};