class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int sum =0;
        for(int i = 0; i<nums.size();i++)
        {
            sum = (sum + nums[i])%k;
            
            if(mp.count(sum)) {if((i - mp[sum])>1) return 1;} 
            else
            mp[sum]=i;
        }
        return 0;
    }
};