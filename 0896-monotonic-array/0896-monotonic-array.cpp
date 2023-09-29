class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
       return find(nums, 1) || find(nums, 0); 
    }
    
    bool find(vector<int> &nums, int order)
    {
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1]) continue;
            if(nums[i]>nums[i-1] && order==0) return 0;
            if(nums[i]<nums[i-1] && order==1) return 0;
        }
        return 1;
    }
};