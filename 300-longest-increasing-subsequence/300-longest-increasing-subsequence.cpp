class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> res;
        for(auto x : nums)
        {
            auto it = lower_bound(res.begin(), res.end(), x);
            if(it!=res.end())
                *it = x;
            else res.push_back(x);
        }
        return res.size();
    }
};