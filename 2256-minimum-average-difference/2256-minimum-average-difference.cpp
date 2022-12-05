class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        double sum = 0, presum = 0;
        int n = nums.size();
        for(auto x : nums)
            sum += x;
        int ans = INT_MAX, ind =0;
        for(int i=0;i<n;i++)
        {
            presum  += nums[i];
            int x = (presum/(i+1)), y =0;
            if(i<n-1)
            y = (sum - presum)/(n-i-1);
            else 
             y = 0;   
            x = abs(x - y);
            if(x<ans)
            {
                ans = x;
                ind = i;
            }
        }
        
        return ind;
    }
};