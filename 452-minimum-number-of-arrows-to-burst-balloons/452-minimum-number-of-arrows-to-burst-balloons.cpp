class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [&](vector<int>&v1, vector<int>&v2){
            return v1[1]<v2[1] || (v1[1]==v2[1] && v1[0]<v2[0]);
        });
        
        int end = points[0][1], cnt =1;
        
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]<=end)
                continue;
            else {
                cnt++; end = points[i][1];
            }
        }
        
        
        return cnt;
    }
};