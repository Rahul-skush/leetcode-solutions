class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        if(n==1) return 1;
        vector<vector<int>> adj[n];
        for(auto x : roads)
        {
            adj[x[0]].push_back({x[1], x[2]});
            adj[x[1]].push_back({x[0], x[2]});
        }
        
        priority_queue<vector<long long>, vector<vector<long long>>, greater<vector<long long>>> pq;
        pq.push({0, 0});
        vector<long long> ways(n, 0), dist(n, 1e16);
        ways[0] = 1;
        int mod = 1e9+7;
        while(!pq.empty())
        {
            vector<long long> v =pq.top(); pq.pop();
            
            for(auto x :adj[v[1]])
            {
                if(dist[x[0]]>x[1] + v[0])
                {
                    ways[x[0]] = ways[v[1]];
                    dist[x[0]] =x[1] + v[0];
                         pq.push({x[1]+v[0], x[0]});
                }else if(dist[x[0]]==x[1] + v[0]){
                    ways[x[0]] = (ways[x[0]] + ways[v[1]])%mod;
                }
            }
        }
        return ways[n-1];
    }
};
