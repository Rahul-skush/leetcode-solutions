class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> adj[n];
        for(int i =0;i<n;i++)
        {
            for(auto x :  graph[i])
                adj[i].push_back(x);
        }
        
        vector<int> vis(n, 0), rec(n, 0);
        vector<int> res;
        
        for(int i=0;i<n;i++)
        {
            if(rec[i]) continue;
            if(!cycle(i, adj, vis, rec))
                res.push_back(i);
        }
        return res;
    }
    
    bool cycle(int s, vector<int> adj[], vector<int> &vis, vector<int> &rec)
    {
        vis[s] = 1;
        rec[s] = 1;
        for(auto x :  adj[s])
        {
            if(!vis[x] && cycle(x, adj, vis, rec))
                return true;
            else if(rec[x]) return true;
        }
        
        rec[s] = false;
        return false;
    }
};