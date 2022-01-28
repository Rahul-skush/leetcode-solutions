class Solution {
public:
     int dp[202][202];
    int getMoneyAmount(int n) {
      
        memset(dp, -1, sizeof(dp));
        return find( 1, n);
    }
    
    int find(int s, int e)
    {
        if(s>=e) return 0;
        if(dp[s][e]!=-1) return dp[s][e];
        int res = 1e8;
        for(int x = s;x<e;x++)
        {
            int tmp = x + max(find(s, x-1), find(x+1, e));
            
            res = min(res, tmp);
        }
        return dp[s][e] = res;
    }
};