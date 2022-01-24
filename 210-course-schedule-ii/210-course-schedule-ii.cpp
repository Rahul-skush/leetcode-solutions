class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n];
        for(auto x : prerequisites)
            adj[x[1]].push_back(x[0]);
        
        if(checkCycle(n, adj)) return {};
        
        stack<int> st;
        vector<bool> vis(n, 0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
               dfs(i, vis, st, adj); 
            }
        }
        
        vector<int> ans;
        while(!st.empty())
            {ans.push_back(st.top()); st.pop();}
        
        return ans;
    }
    
    void dfs(int s, vector<bool>& vis, stack<int>&st, vector<int> adj[])
    {
        vis[s] = 1;
        for(auto x : adj[s])
        {
            if(!vis[x]) dfs(x, vis, st, adj);
        }
        
        st.push(s);
    }
    
    bool checkCycle(int n, vector<int> adj[])
    {
        vector<bool> parent(n, 0);
        vector<bool> vis(n, 0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i] && cycleCheck(i, vis, parent, adj))
            {
               return 1;
            }
        }
        return 0;
    }
    
    bool cycleCheck(int s, vector<bool>&vis, vector<bool> &parent, vector<int> adj[])
    {
        if(vis[s]==0)
        {
        vis[s] = 1;
        parent[s] = 1;
        for(auto x : adj[s])
        {
            if(!vis[x] && cycleCheck(x, vis, parent, adj))
                return 1;
            else if(parent[x]==1) return 1;
        }
        parent[s] = 0;
        }
        return 0;
    }
};