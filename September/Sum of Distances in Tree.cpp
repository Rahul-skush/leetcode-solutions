class Solution {
public:
    vector<int> sumOfDistancesInTree(int n, vector<vector<int>>& edges) {
        vector<int> adj[n], subTree(n, 1), ans(n, 0);
        for(auto x : edges)
           { adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);}
        vector<bool> vis(n, 0);
        int ans_sum = dfs(0, adj, subTree, vis);
        
        for(int i=0;i<n;i++)
            vis[i]= 0;
        findAns(0, adj,subTree, vis, ans, ans_sum);
        
        return ans;
    }
    
    void findAns(int v, vector<int> adj[], vector<int>&subTree, vector<bool>& vis, vector<int> &ans, int now)
    {
        vis[v] =true;
        ans[v] = now;
        for(auto u : adj[v])
        {
            if(vis[u]==false)
            {
                findAns(u, adj, subTree, vis, ans, now -subTree[u] + subTree[0] - subTree[u]);
            }
        }
            
    }
    
    int dfs(int v, vector<int> adj[], vector<int> &subTree, vector<bool> &vis)
    {
        int curr = 0;
        vis[v] = 1;
        
        for(auto u : adj[v])
        {
            if(vis[u]==false)
            {
                curr += dfs(u, adj, subTree, vis);
                curr += subTree[u];
                subTree[v] += subTree[u];
            }
        }
        return curr;
    }
};
