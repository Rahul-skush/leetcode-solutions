class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        map<int, int> mp;
        for(auto x : nums)
            {int y = x - rev(x);
        mp[y]++;}
        long ans =0, mod = 1e9+7;
        for(auto x : mp)
        {
            long n = (x.second)%mod;
            ans = (ans + (n*(n-1)/2)%mod)%mod;
        }
        return  ans;
    }
    
    int rev(int n)
    {
        string s = to_string(n);
        reverse(s.begin(), s.end());
        int m = stoi(s);
        return m;
    }
};
