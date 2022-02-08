class Solution {
public:
    int maxy = 400000;
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        vector<vector<int>> dp(n+1, vector<int>(d+1, -1));
        int ans =  find(0, jobDifficulty, d, dp);
        if(ans == maxy) return -1;
        return ans;
    }
    
    int find(int s, vector<int>& jd, int d, vector<vector<int>> &dp)
    {
        if(d==0)
        {
            if(s==jd.size()) return 0;
            return maxy;
        }
        if(s==jd.size()) return maxy;
        if(dp[s][d]!=-1) return dp[s][d];
        
        int mx = INT_MIN, ans = maxy;
        for(int i=s;i<jd.size();i++)
        {
            mx = max(mx, jd[i]);
            
            ans = min(ans, mx + find(i+1 ,jd, d-1, dp));
        }
        
        return  dp[s][d] = ans;
    }
};