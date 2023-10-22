class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int i =k-1, j = k+1, n = nums.size();
        int ans =nums[k], mn = nums[k];
        while(i>=0 || j<n)
        {
            int val;
            if(i==-1) val = nums[j++];
            else if(j==n+1) val = nums[i--];
            else
            if(nums[i]>=nums[j])
            {
                val = nums[i--];
            }else{
                 val = nums[j++];
            }
           mn = min(val, mn);
            ans = max(ans, mn*(j-i-1));
        }
        
        
        return ans;
    }
};