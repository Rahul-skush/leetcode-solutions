class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum =0;
        mp[0] = -1;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            
            if(mp.find(sum%k)!=mp.end())
               { 
                int j = mp[sum%k];
                if((i-j)>1) return 1;
              }
            else
            mp[sum%k] = i;
        }
        return 0;
    }
};