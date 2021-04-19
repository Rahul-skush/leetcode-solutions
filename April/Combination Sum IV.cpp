typedef unsigned long long ull;
class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<ull> sum(target +1, 0);
        sum[0] = 1;
        
        for(int i=1;i<=target;i++)
        {
            for(int j : nums)
            {
                if(j<=i)
                    sum[i] = (sum[i] + sum[i-j]);
            }
        }
        return sum[target];
    }
};
