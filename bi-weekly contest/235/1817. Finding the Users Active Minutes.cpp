class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& logs, int k) {
        map<int, set<int>> mp;
        for(auto x : logs)
        {
            mp[x[0]].insert(x[1]);
        }
        
        map<int, int> s;
        for(auto x : mp)
            s[x.second.size()]++;
        vector<int> ans(k, 0);
        
        for(auto x : s)
            ans[x.first-1] = x.second;
        return ans;
    }
};
