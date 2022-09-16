class Solution {
public:
    
  int rec(int i,int l,int h,vector<int>&nums,vector<int>&m,vector<vector<int>>&dp){
        if(i>=m.size()){
            return 0;
        }
        if(l>h){
            return 0;
        }
        if(dp[i][l]!=INT_MIN)
            return dp[i][l];
        
        int op1=rec(i+1,l+1,h,nums,m,dp)+nums[l]*m[i];
        int op2=rec(i+1,l,h-1,nums,m,dp)+nums[h]*m[i];
        
        return dp[i][l]=max(op1,op2);
    }
    int maximumScore(vector<int>& nums, vector<int>& m) {
        int n=nums.size();
        vector<vector<int>>dp(m.size(),vector<int>(m.size(),INT_MIN));
        return rec(0,0,n-1,nums,m,dp);
    }
};