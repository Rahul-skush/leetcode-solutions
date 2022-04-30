class Solution {
public:
    
    map<string, vector<pair<string, double>>> mp;
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        for(int i=0;i<values.size();i++)
        {
            mp[equations[i][0]].push_back({equations[i][1], values[i]});
            mp[equations[i][1]].push_back({equations[i][0], 1/values[i]});
        }
        
        vector<double> res;
        for(auto q : queries)
        {
            unordered_set<string> st;
            double ans = -1;
            dfs(q[0], q[1], st, ans, 1);
            res.push_back(ans);
        }
        return res;
        
    }
    
    void dfs(string s, string d,  unordered_set<string> &st, double &ans, double t)
    {
        if(mp.count(s)==0) return ;
        if(s==d)  {ans = t; return ;}
        st.insert(s);
        for(auto x : mp[s])
        {
            if(st.count(x.first)==0)
            dfs(x.first, d, st, ans, t*x.second);
        }
    }
};
