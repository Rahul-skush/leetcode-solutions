class Solution {
public:
    int dp[1001][2001];
    int ans =0;
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        return  find(0, k, piles);
    }
    
    int find(int i, int k, vector<vector<int>>& piles)
    {
        if(k==0 || i==piles.size() ) return 0;
        if(dp[i][k]!=0) return dp[i][k];
        int x = 0, z = piles[i].size();
        int y = find(i+1, k, piles);
        int curr =0;
        for(int j=0;j<min(z, k);j++)
        {
            curr += piles[i][j];
            
            x = max(x, find(i+1, k-j-1, piles) + curr);
        }
        return dp[i][k] =  max(x, y);
    }
};