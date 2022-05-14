class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dist(n+1, INT_MAX);
        dist[k] = 0;
        vector<pair<int, int>> adj[n+1];
        for(auto x : times)
            adj[x[0]].push_back({x[1], x[2]});
        
        queue<vector<int>> pq;
        pq.push({0, k});
        while(!pq.empty())
        {
            vector<int> v = pq.front(); pq.pop();
            
            for(auto x : adj[v[1]])
            {
                if(v[0] + x.second<dist[x.first])
                    {dist[x.first] = v[0] + x.second;
                    pq.push({dist[x.first], x.first});}
            }
        }
        
        int res = 0;
        for(int i = 1;i<=n;i++)
           res = max(res, dist[i]);
        return res==INT_MAX?-1:res;
    }
};