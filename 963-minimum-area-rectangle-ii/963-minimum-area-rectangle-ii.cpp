class Solution {
public:
    double minAreaFreeRect(vector<vector<int>>& points) {
        
        long long ans = 1e18;
            int n = points.size();
        set<vector<int>> st;
        for(auto x : points)
            st.insert(x);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                    for(int k=0;k<n;k++)
                    {
                        if(k==j) continue;
                        if(dist(i, j, points) + dist(j, k, points) != dist(k, i, points)) continue;
                        int x = points[i][0] + points[k][0] - points[j][0];
                        int y = points[i][1] + points[k][1] - points[j][1];
                        if(st.count({x, y})==0) continue;
                        
                        long long a = dist(i, j, points);
                        long long b = dist(j, k, points);
                        
                        ans = min(ans, a*b);
                    }
                
            }
        }
        if(ans==1e18) return 0;
        return sqrt(ans*1.0);
    }
    
    
    long long dist(int i, int j, vector<vector<int>>& points)
    {
       long long d = (points[i][0] - points[j][0] + 0ll)*(points[i][0] - points[j][0] + 0ll)
                 + 
                (points[i][1] - points[j][1] + 0ll)*(points[i][1] - points[j][1] + 0ll);
        
        return d;
    }
};