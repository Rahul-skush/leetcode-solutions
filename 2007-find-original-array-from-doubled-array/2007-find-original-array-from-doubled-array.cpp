class Solution {
public:
    vector<int> findOriginalArray(vector<int>& nums) {
        if(nums.size()%2) return {};
        sort(nums.begin(), nums.end());
        unordered_map<int, int> mp;
        int cnt =0;
        vector<int> v;
        for(auto x : nums)
        {
            if(x%2==0 && mp.count(x/2) && mp[x/2]){v.push_back(x/2); mp[x/2]--; cnt+=2;}
            else mp[x]++;
        }
        
        if(cnt!=nums.size()) return {};
        return v;
    }
};