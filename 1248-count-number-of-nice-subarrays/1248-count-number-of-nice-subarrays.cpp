class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int cnto = 0, i =0, j =0, n = nums.size();
        int ans =0;
        unordered_map<int, int> mp;
        mp[0] =1;
        while(j<nums.size())
        {
            cnto += nums[j]%2;
            ans += mp[cnto - k];
            mp[cnto]++;
            j++;
        }
        return ans;
    }
};