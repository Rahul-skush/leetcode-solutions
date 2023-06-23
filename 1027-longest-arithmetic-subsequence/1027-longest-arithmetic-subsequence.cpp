class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size(), ans =0;
        vector<vector<int>> dp(n, vector<int>(501, 1));
        vector<vector<int>> dp_neg(n, vector<int>(501, 1));
        
        for(int i=1;i<n;i++)
        {
            for(int j =i-1;j>=0;j--)
            {
                int diff = nums[i] - nums[j];
                if(diff<0)
                {
                    diff =abs(diff);
                    dp_neg[i][diff] = max(dp_neg[i][diff], dp_neg[j][diff] +1);
                    ans = max(ans,  dp_neg[i][diff]);
                }
                else{ 
                dp[i][diff] = max(dp[i][diff], dp[j][diff] +1);
                ans = max(ans,  dp[i][diff]);
                }
            }
        }
        
        return ans;
    }
};