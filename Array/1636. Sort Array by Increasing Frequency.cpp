class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
       map<int, int> mp;
        vector<pair<int, int>>mp2;
        for(auto x : nums)
            mp[x]++;
        for(auto x :mp)
            mp2.push_back({x.second, x.first});
        int i =0;
        sort(mp2.begin(), mp2.end(),
             [&](pair<int, int> &p, pair<int, int>&q){
            return p.first<q.first || (p.first == q.first && p.second>q.second);
        });
        for(auto &x : mp2)
        {
            int y = x.first;
            while(y--)
                nums[i++] = x.second;
        }
        return nums;
    }
};
