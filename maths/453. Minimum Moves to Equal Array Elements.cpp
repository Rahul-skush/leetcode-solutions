class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx = INT_MAX;
        for(auto x : nums)
            mx = min(x, mx);
        int ans = 0;
        for(auto x :nums)
            ans += -mx + x;
        return ans;
    }
};
