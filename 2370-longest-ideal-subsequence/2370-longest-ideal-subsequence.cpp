class Solution {
public:
    int longestIdealString(string s, int k) {
        vector<int> dp(26, 0);
        for(int i=0;i<s.size();i++)
        {
            int ind = s[i]-'a', mn= 0;
            for(int j=max(0, ind-k); j<=min(25, ind+k);j++)
                mn= max(mn, dp[j]+1);
            dp[ind] =mn;
        }
        
        int ans =0;
        for(int i =0;i<26;i++)
            ans = max(ans, dp[i]);
        return ans;
    }
};