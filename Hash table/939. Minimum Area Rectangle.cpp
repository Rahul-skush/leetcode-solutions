class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        unordered_map<int, set<int>> mp;
        for(auto x : points)
        {
            mp[x[0]].insert(x[1]);
        }
        int ans =INT_MAX;
        sort(points.begin(), points.end());
        for(int i=0;i<points.size();i++)
        {
            for(int j=i+1;j<points.size();j++)
            {
                int x1 = points[i][0], x2 = points[j][0];
                int y1 = points[i][1], y2 = points[j][1]; 
                
                if(y1!=y2 && x1!=x2 && mp[x1].count(y2) && mp[x2].count(y1))
                {
                    int m = abs((y2-y1)*(x2-x1));
                     ans = min(ans, m);
                    //cout<<x1<<y1<<" "<<x2<<y2<<"="<<m<<endl;
                }
                   
            }
        }
        if(ans==INT_MAX) return 0;
        return ans;
        
        
    }
};
