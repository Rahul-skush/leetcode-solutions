class Solution {
public:
    string rankTeams(vector<string>& votes) {
        string ans;
        int n = votes[0].size();
        vector<vector<int>> mp(26, vector<int>(n+1, 0));
        for(int i=0;i<votes[0].size();i++)
        {
            for(auto x : votes)
            {
                mp[x[i]-'A'][i]++;
            }
        }
        
        for(int i=0;i<26;i++)
            mp[i][n]=26-i;
        
        sort(mp.rbegin(), mp.rend());
        for(int i=0;i<n;i++)
        {
            ans += 'A' + (26 - mp[i][n]);
        }
        return ans;
    }
};