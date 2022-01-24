class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
         int ans =0;
        for(int i=0;i<points.size();i++)
        {
            unordered_map<int, int> mp;
            for(int j=0;j<points.size();j++)
            {
                if(j==i) continue;
                int dist = pow(points[i][0] - points[j][0], 2) + 
                            pow(points[i][1] - points[j][1], 2);
                mp[dist]++;
            }
            for(auto x : mp)
            {
                int n = x.second;
                if(n>1)
                ans += n*(n-1);
            }
        }
       
        
        
        return ans;
    }
};