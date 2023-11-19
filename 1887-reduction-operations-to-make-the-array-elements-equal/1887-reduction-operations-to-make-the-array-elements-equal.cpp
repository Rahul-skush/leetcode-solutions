class Solution {
public:
    int reductionOperations(vector<int>& nums) {
      map<int, int> mp;
        for(auto x :  nums)
            mp[x]++;
        
        int sum = nums.size(), ans =0;
        
        auto itr = mp.begin();
        int prv = itr->second;
        itr++;
        while(itr!=mp.end())
        {
            sum -= prv;
            ans += sum;
            prv = itr->second;
            itr++;
        }
        
        return ans;
    }
};