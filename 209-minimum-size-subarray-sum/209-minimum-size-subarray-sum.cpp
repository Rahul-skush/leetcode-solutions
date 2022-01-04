class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0, j=0, ans = INT_MAX;
        long long sum = 0;
        while(j<nums.size())
        {
            while(sum<target && j<nums.size())
                sum += nums[j++];
            
            while(sum>=target && i<j)
                {ans = min(ans, j-i); sum -= nums[i++]; }
        }
        return ans==INT_MAX?0:ans;
    }
};