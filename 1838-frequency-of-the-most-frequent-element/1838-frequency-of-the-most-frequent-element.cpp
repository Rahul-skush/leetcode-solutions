class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        
        int i=0, j =0, ans =0;
        long long sum =0;
        
        while(j<nums.size())
        {
            sum += nums[j];
            long long d = nums[j]*(long long)(j-i+1);
            while(d - sum>k)
            {
                sum -= nums[i++];
                d = nums[j]*(long long)(j-i+1);
            }
            
            ans = max(ans, j-i+1);
            j++;
        }
        
        return ans;
    }
};