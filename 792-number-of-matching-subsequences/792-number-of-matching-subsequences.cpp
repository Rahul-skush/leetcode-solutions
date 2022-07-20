class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        unordered_map<char, vector<int>> mp;
        int cnt =0;
       for(int i=0;i<s.size();i++)
           mp[s[i]].push_back(i);
        
        for(auto x : words)
        {
            int i=0, k=0;
            while(i<x.size() && mp.find(x[i])!=mp.end())
            {
                auto j = lower_bound(mp[x[i]].begin(), mp[x[i]].end(), k);
                if(j==mp[x[i]].end())
                    break;
                else k = *j +1;
                i++;
            }
            if(i==x.size()) cnt++;
        }
        return cnt;
    }
};