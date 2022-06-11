class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int tsum =0;
        for(auto x : nums)
            tsum +=  x;
        
        int i=0, j =0, sum =0, ans = INT_MAX, n = nums.size();
        while(j<nums.size())
        {
            sum += nums[j];
            while(i<=j && tsum -sum<x) sum-= nums[i++];
            if(tsum - sum==x) ans = min(ans, n - (j-i+1));
            j++;
        }
        return ans==INT_MAX?-1:ans;
    }
};