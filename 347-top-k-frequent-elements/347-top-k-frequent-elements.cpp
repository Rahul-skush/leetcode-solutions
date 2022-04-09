class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(auto x : nums)
            mp[x]++;
        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        for(auto x : mp)
        {
            pq.push({x.second, x.first});
            if(pq.size()>k) pq.pop();
        }
        
        vector<int> res;
        while(!pq.empty())
            res.push_back(pq.top()[1]), pq.pop();
        
        return res;
    }
};