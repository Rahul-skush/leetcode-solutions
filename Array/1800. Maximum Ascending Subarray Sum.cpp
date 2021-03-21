class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans = 0, subSum = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
                subSum += nums[i];
            else
            {
                ans = max(ans, subSum);
                subSum = nums[i];
            }
        }
        return max(ans, subSum);
    }
};
