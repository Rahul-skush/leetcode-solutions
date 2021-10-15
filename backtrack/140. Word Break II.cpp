class Solution {
public:
    vector<string> ans;
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        
        unordered_set<string> st;
        for(auto x : wordDict)
            st.insert(x);
        find("", st, s, 0);
        return ans;
    }
    void find(string t, unordered_set<string> &st, string &s, int i)
    {
        if(i==s.size())
        {
            t.pop_back();
            ans.push_back(t);
            return ;
        }
        string x;
        for(int j=i;j<s.size();j++)
        {
            x += s[j];
            if(st.count(x))
            {
                find(t + x + ' ', st, s, j+1);
            }
        }
    }
};
