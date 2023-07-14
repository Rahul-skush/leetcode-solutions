class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
       unordered_map<int, int> mp;
        int ans =0;
        for(auto x :  arr)
        {
            mp[x] = mp[x - difference]+1;
            ans = max(ans, mp[x]);
        }
        return ans;
    }
};