class Solution {
public:
    int minCut(string s) {
        int n = s.size();
        if(n<=1) return 0;
        int minCuts[n+1];
        for(int i=0;i<=n;i++)
            minCuts[i] = i-1;
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for(int i=1;i<n;i++)
        {
            for(int j=i;j>=0;j--)
            {
                if(s[i]==s[j] && (i-j<2 || dp[j+1][i-1]))
                {
                    dp[j][i] = 1;
                    minCuts[i+1] = min(minCuts[i+1], minCuts[j]+1);
                }
            }
        }
        return minCuts[n];
    }
};
