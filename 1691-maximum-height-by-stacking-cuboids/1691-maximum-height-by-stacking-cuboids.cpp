class Solution {
public:
    int maxHeight(vector<vector<int>>& cuboids) {
        
        for(auto &x : cuboids)
            sort(x.begin(), x.end());
        
        sort(cuboids.rbegin(), cuboids.rend());
        int n = cuboids.size();
        vector<int> LIS(n+1, 0);
        int ans = 0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i;j>=0;j--)
            {
                if(cuboids[i][0]<=cuboids[j][0] && cuboids[i][1]<=cuboids[j][1] && 
                  cuboids[i][2]<=cuboids[j][2])
                    LIS[i] = max(LIS[i], LIS[j] + cuboids[i][2]);
                ans = max(ans, LIS[i]);
            }
        }
        
        return ans;
    }
};


