class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> adj[n+1];
        for(auto x : dislikes)
            {adj[x[0]].push_back(x[1]); adj[x[1]].push_back(x[0]);}
        vector<int> color(n+1, -1);
        for(int i=1;i<=n;i++)
        {
            if(color[i]==-1 && !bfs(i, adj, color)) return 0;
        }
        return 1;
    }
    
    bool bfs(int s, vector<int> adj[], vector<int> &color)
    {
        queue<int> q;
        q.push(s);
        color[s] = 1;
        while(!q.empty())
        {
           
                int x = q.front(); q.pop();
                
                for(auto it : adj[x])
                {
                    if(color[it]==-1)
                    {
                        color[it] = color[x]==1?0:1;
                        q.push(it);
                    }else if(color[it]==color[x])
                        return 0;
                }
            
        }
        return 1;
    }
};