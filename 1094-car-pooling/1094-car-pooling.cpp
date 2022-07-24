class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int, int> mp;
        for(auto x : trips)
        {
            mp[x[1]] += x[0];
            mp[x[2]] -= x[0];
        }
        
        int sum =0;
        for(auto x : mp)
        {
            sum += x.second;
            if(sum>capacity) return 0;
        }
        return 1;
    }
};