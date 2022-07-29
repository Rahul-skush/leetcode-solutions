class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> res;
        for(auto x : words)
        {
            unordered_map<char, char> mp, mp1;
            int f =1;
            for(int i=0;i<x.size();i++)
            {
                if(mp.find(pattern[i])==mp.end())
                mp[pattern[i]] = x[i];
                else{
                    if(mp[pattern[i]]!=x[i]) {
                        f =0; break;
                    }
                }
                
                if(mp1.find(x[i])==mp1.end())
                mp1[x[i]] = pattern[i];
                else{
                    if(mp1[x[i]]!=pattern[i]) {
                        f =0; break;
                    }
                }
            }
            if(f) res.push_back(x);
        }
        return res;
    }
};