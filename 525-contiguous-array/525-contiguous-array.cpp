class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans =0, sum =0;
        for(auto &x : nums)
            if(x==0) x=-1;
        
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            
            if(sum==0) ans = i+1;
            if(mp.count(sum))
                ans = max(ans, i-mp[sum]);
            else
            mp[sum] = i;
        }
        return ans;
    }
};