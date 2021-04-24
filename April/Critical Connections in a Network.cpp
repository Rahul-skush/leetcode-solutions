class Solution {
public:
    vector<vector<int>> bridges;
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        for(auto x : connections)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<int> low(n, -1), disc(n, -1);
        vector<int>  parent(n, -1);
        for(int i=0;i<n;i++)
        {
            if(disc[i]==-1)
                dfs(i, low, disc,  parent, adj);
        }
        return bridges;
    }
    
    void dfs(int u, vector<int> &low, vector<int> &disc,  vector<int> &parent,
            vector<int> adj[])
    {
        static int timer = 0;
        parent[u] = parent[u];
        low[u] = disc[u] = timer++;
        for(auto v : adj[u])
        {
            if(disc[v]==-1)
            {
                parent[v] = u;
                dfs(v, low, disc, parent, adj);
                low[u] = min(low[u], low[v]);
                
                if(low[v]>disc[u])
                    bridges.push_back({u,v});
            }
            else if(parent[u]!=v)
                low[u] = min(low[u], disc[v]);
        }
    }
};
