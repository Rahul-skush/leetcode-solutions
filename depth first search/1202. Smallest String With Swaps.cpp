class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n = s.length();
        vector<int> adj[n];
        for(auto x : pairs)
            {adj[x[0]].push_back(x[1]);
             adj[x[1]].push_back(x[0]);}
        vector<int> vis(n, 0);
        for(int i =0;i<n;i++)
        {
            vector<int> v;
            if(vis[i]==0)
                {dfs(i, adj, v, vis);
            vector<char> ch(v.size());
            for(int j =0;j<v.size();j++)
                {ch[j] = s[v[j]]; }

            sort(ch.begin(), ch.end());
            sort(v.begin(), v.end());
            for(int j=0;j<v.size();j++)
                s[v[j]] = ch[j];
                }
        }
        return s;
            
    }
    
    void dfs(int s, vector<int> adj[], vector<int> &v, vector<int>&vis)
    {
        vis[s] = 1;
        v.push_back(s);
        for(auto x : adj[s])
        {
            if(vis[x]==0)
                dfs(x, adj, v, vis);
        }
    }
};
