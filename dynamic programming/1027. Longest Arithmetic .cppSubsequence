class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> LIS(n, vector<int>(2000, 0));
        int ans =2;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int d = nums[j] - nums[i] +1000;
                    LIS[j][d] = max(2, LIS[i][d]+1);
                ans = max(ans,  LIS[j][d]);
            }
        }
        
        return ans;
    }
};
