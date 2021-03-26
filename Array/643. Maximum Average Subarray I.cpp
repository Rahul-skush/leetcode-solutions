class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum  =0 , f =0, ans =INT_MIN;
        for(int i =0;i<nums.size();i++)
        {
            if(i>=k) {sum -= nums[i-k]; }
            sum+= nums[i];
            if(i>=k-1)
             ans = max(ans, sum/k);
        }
        return max(ans, sum/k);
    }
};
