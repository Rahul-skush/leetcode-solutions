class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        priority_queue<vector<int>> pq;
        int n = nums.size(), ans =INT_MIN;
       vector<int> dp(n, nums[0]);
        
        for(int i=0;i<nums.size();i++)
        {
            while(pq.size()>k && pq.top()[1]<i-k )
                pq.pop();
            if(!pq.empty())
               dp[i] = pq.top()[0] + nums[i]; 
            else dp[i] = nums[i]; 
                pq.push({dp[i], i});
        }
        return dp[n-1];
    }
};

