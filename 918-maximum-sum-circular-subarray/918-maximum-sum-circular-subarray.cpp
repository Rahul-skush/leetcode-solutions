class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int i=0, ans =INT_MAX, sum =0, tsum =0, cnt0= 0, fmax = INT_MIN;
        while(i<n)
        {
            if(nums[i]<0) cnt0++;
            fmax = max(nums[i], fmax);
            if(sum + nums[i%n]>0)
                sum =0;
            else sum += nums[i%n];
            tsum += nums[i];
            ans = min(ans, sum);
            i++;
        }
        ans = max(tsum - ans, INT_MIN);
        if(cnt0==n) return fmax;
         i=0, sum =0, tsum =0;
        while(i<n)
        {
            if(sum + nums[i%n]<=0)
                sum =0;
            else sum += nums[i%n];
            ans = max(ans, sum);
            i++;
        }
        return ans;
    }
};