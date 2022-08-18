class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int ans = 0;
        for(int i =1;i<nums.size()-1;i++)
        {
            int l = findLeft(i, nums);
            int r = findRight(i, nums);
            if(!l || !r) continue;
            int t = l +r;
            ans = max(t+1, ans);
        }
        
        return nums.size() - ans;
    }
    
    int findLeft(int i, vector<int> &nums)
    {
        vector<int> res;
        for(int j=0;j<i;j++)
        {
            if(nums[j]>=nums[i]) continue;
            auto it = lower_bound(res.begin(), res.end(),  nums[j]);
            
            if(it==res.end()) res.push_back(nums[j]);
            else *it = nums[j];
        }
        return res.size();
    }
    
    int findRight(int i, vector<int> &nums)
    {
        vector<int> res;
        for(int j=nums.size()-1;j>i;j--)
        {
            if(nums[j]>=nums[i]) continue;
            auto it = lower_bound(res.begin(), res.end(),  nums[j]);
            
            if(it==res.end()) res.push_back(nums[j]);
            else *it = nums[j];
        }
        return res.size();
    }
};