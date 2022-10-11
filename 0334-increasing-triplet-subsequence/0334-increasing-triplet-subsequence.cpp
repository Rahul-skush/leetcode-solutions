class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        vector<int> res;
        for(int i : nums)
        {
            auto it = lower_bound(res.begin(), res.end(), i);
            if(it==res.end())
                res.push_back(i);
            else *it = i;
        }
        return res.size()>=3;
    }
};