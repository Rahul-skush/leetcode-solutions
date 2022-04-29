class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int m = graph.size();
        vector<int> adj[m];
        for(int j=0;j<graph.size();j++)
        {
            for(int i=0;i<graph[j].size();i++){
                 adj[j].push_back(graph[j][i]);
            }
           
        }
        
        vector<int> vis(m+1, -1);
        
        for(int i=0;i<m;i++)
        {
            if(vis[i]!=-1) continue;
            
            queue<int> q;
            q.push(i);
            vis[i] = 1;
            
            while(!q.empty())
            {
                int n = q.size();
                for(int j=0;j<n;j++){
                int p = q.front(); q.pop();
                
                for(auto x : adj[p])
                {
                    if(vis[x]!=-1 && vis[x]==vis[p]) return 0;
                    if(vis[x]==-1)
                    {vis[x] = 1-vis[p]; q.push(x);}
                }
                }
            }
        }
        
        return 1;
    }
};