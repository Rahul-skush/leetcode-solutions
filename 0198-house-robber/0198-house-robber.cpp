class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0], nums[1]);
        int a = 0;
        int b = 0;
        
        for(int i=0;i<nums.size();i++)
        {
            int c = max(nums[i] + a, b);
            a = b;
            b = c;
        }
        return max(a, b);
    }
};