class Solution {
public:
     
    int minScoreTriangulation(vector<int>& values) {
     vector<vector<int>> dp(51, vector<int>(51, INT_MAX));  
        return find(0, values.size()-1, values, dp);
    }
    
    int find(int i, int j, vector<int>&values, vector<vector<int>>& dp)
    {
        if(i+1>=j) return 0;
        if(dp[i][j]!=INT_MAX) return dp[i][j];
       
        for(int x  =i+1;x<j;x++)
        {
            dp[i][j] = min(dp[i][j], find(i, x, values, dp) + find(x, j, values, dp) 
                      + values[i]*values[j]*values[x]);
        }
        return dp[i][j];
    }
};
