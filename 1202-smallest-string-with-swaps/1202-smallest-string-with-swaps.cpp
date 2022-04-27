class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        if(pairs.size()==0) return s;
        int n  = s.size();
        vector<int> adj[n];
        
        for(auto x : pairs)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        
        vector<bool> vis(n, 0);
        for(int i=0;i<n;i++)
        {
            vector<char> ch;
            vector<int> pos;
            if(!vis[i])
            {dfs(i, vis, adj, ch, pos, s);
            }
            if(ch.size())
            {
            sort(ch.begin(), ch.end());
            sort(pos.begin(), pos.end());
            for(int j=0;j<pos.size();j++)
                {s[pos[j]] = ch[j];}
            }
          
        }
        
        return s;
    }
    
    
    void dfs(int s, vector<bool> &vis, vector<int> adj[],
             vector<char> &ch, vector<int> &pos, string &str){
        ch.push_back(str[s]);
        pos.push_back(s);
        vis[s] = 1;
        for(auto x : adj[s])
        {
            if(!vis[x])
                dfs(x, vis, adj, ch, pos, str);
        }
    }
};