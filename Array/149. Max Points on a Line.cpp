class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int ans =1;
        for(int i=0;i<points.size();i++)
        {
            unordered_map<double, int> mp;
            
            for(int j=0;j<points.size();j++)
            {
                if(i==j) continue;
                double diff = (points[j][1]-points[i][1] + 0.0)/(points[j][0]-points[i][0]);
                mp[diff]++;
                ans = max(ans, mp[diff]+1);
            }
        }
        return ans;
    }
};
