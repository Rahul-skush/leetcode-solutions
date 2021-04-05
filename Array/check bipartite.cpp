class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> color(V, -1);
        
        for(int i =0;i<V;i++)
        {
            if(color[i]==-1 && !bfs(color, graph, i))
             return false;
        }
        return true;
    }
    
    bool bfs(vector<int> &color, vector<vector<int>> &graph, int s)
    {
        color[s] = 1;
        queue<int> q;
        q.push(s);
        
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            
            for(auto i : graph[u])
            {
                if(color[i]==-1)
                {
                    color[i] = 1- color[u];
                    q.push(i);
                }
                else
                    if(color[i]==color[u]) return false;
            }
        }
        return true;
    }
};
