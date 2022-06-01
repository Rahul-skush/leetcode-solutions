class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum =0;
        for(auto &x : nums)
            sum+=x, x = sum;
        
        return nums;
    }
};