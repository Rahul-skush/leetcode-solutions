class Solution {
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [&](string &s1, string &s2){
            return s1.size()<s2.size() || (s1.size()==s2.size() && s1<=s2);
        });
        int n = words.size(), ans =0;
        vector<int> dp(n+1, 0);
        
        for(int i=0;i<n;i++)
        {
            dp[i]=1;
            for(int j=i-1;j>=0;j--)
            {
                if(words[i].size()-1>words[j].size()) break;
                if(check(words[j], words[i]))
                    {dp[i] = max(dp[i], dp[j]+1); }
            }
            ans = max(ans, dp[i]);
        }
        
        return ans;
        
    }
    
    bool check(string &s1, string &s2)
    {
        if(s2.size()-1!=s1.size()) return 0;
        
        int i=0, j =0;
        while(j<s2.size())
        {
            if(s1[i]==s2[j]) i++, j++;
            else j++;
        }
        
        return j-1==i;
    }
};