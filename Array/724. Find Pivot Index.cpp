class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(auto x : nums)
            sum += x;
        int sum2 =0;
        for(int i =0;i<nums.size();i++)
        {
           if(sum - sum2 - nums[i] == sum2)
               return i;
            sum2 += nums[i];
        }
        return -1;
    }
};
