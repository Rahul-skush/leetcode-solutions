class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) 
    {
        double ans = 0;
        for(auto &i : points)
        {
            for(auto &j:points)
            {
                for(auto &k :points)
                {
                    double m = (double)(i[0]*(j[1]-k[1]) + j[0]*(k[1]-i[1]) + k[0]*(i[1]-j[1]))/2;
                    ans = max(ans, m);
                }
            }
        }
        return ans;
    }
};
