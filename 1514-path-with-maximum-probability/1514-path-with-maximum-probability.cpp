class Solution {
public:
    double ans =0;
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<pair<int, double>> adj[n];
        
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back({edges[i][1], succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0], succProb[i]});
        }
        
        vector<bool> vis(n, 0);
        priority_queue<pair<double, int>> q;
        q.push({1,start});
        while(!q.empty())
        {
            pair<double, int> p = q.top(); q.pop();
            if(p.second == end) {ans= max(ans, p.first); continue;}
            vis[p.second] = 1;
            for(auto x : adj[p.second])
            {
                if(!vis[x.first])
                    {q.push({ p.first*x.second, x.first});}
            }
        }
       return  ans;
        
    }
    
    
};