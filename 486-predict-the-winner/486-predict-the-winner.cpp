class Solution {
public:
    int dp[21][21];
    int max1 = 0, max2 =0;
    bool PredictTheWinner(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        int x =  find(0, nums.size()-1, nums);
        int sum =0;
        for(auto y :nums)
            sum+=y;
        return x>=sum-x;
    }
    
    int find(int i, int j, vector<int> &nums)
    {
        if(i>j) 
           { return 0;}
        if(dp[i][j]!=-1) return dp[i][j];
        int a = nums[i] + min(find(i+1, j-1, nums), find(i+2, j, nums));
        int b = nums[j] + min(find(i, j-2, nums), find(i+1, j-1, nums));
        return dp[i][j] =  max(a, b);
    }
};