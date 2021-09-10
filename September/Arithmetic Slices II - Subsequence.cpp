class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        int n = nums.size();
        unordered_map<int, int> mp[n];
        int ans = 0;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                long long diff = (long)nums[i] - nums[j];
                if(diff>INT_MAX || diff <= INT_MIN) continue;
                int dif = (int)diff;
                int n1 = mp[i][dif];
                int n2 = mp[j][dif];
                
                ans += n2;
                
                mp[i][dif] = n1 + n2 +1; 
            }
        }
        return ans;
    }
};
