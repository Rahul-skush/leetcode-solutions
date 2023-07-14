class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<int> adj[n];
        
        for(auto x: prerequisites)
            adj[x[0]].push_back(x[1]);
        
        vector<int> vis(n, 0), rec(n, 0);
        
        for(int i =0;i<n;i++)
        {
            if(!vis[i] && isCycle(i, adj, vis, rec))
                return false;
        }
        return true;
    }
    
    bool isCycle(int s, vector<int> adj[], vector<int> &vis, vector<int> &rec)
    {
        vis[s] = 1;
        rec[s] = 1;
        
        for(auto i : adj[s])
        {
            if(!vis[i] && isCycle(i, adj, vis, rec))
                return true;
            else if(rec[i])
                return true;
        }
        
        rec[s] = false;
        return false;
    }
};