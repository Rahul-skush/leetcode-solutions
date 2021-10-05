class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& target) {
        int mn = INT_MAX;
        for(auto x : ghosts)
        {
            mn = min(mn , abs(x[0]-target[0]) + abs(x[1]-target[1]));
        }
        
        int x = abs(target[0]) + abs(target[1]);
        
        return x<mn;
    }
};
