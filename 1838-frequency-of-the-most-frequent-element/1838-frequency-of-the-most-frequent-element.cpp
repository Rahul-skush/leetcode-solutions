class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = nums.size()-1, j= nums.size()-1;
        int m = nums[j], ans =0;
        while(k>=0 && i>=0)
            {
                int diff = m - nums[i];
                if(diff<=k)
                {
                    k -= diff;
                    i--;
                }else{
                    int diff2 = m - nums[j-1];
                    m = nums[j-1];
                    k += (j-1 - i)*diff2;
                    j-=1;
                }
                ans = max(ans, j-i);
            }
        return ans;
    }
};