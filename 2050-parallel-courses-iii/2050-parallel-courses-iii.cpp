class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<int> adj[n+1];
        vector<int> indegree(n+1, 0), dist(n+1, 0);
        for(auto i : relations)
            {adj[i[0]].push_back(i[1]); indegree[i[1]]++;}
        
        queue<int> q;
        for(int i=1;i<=n;i++)
        {
            if(indegree[i]==0)
                q.push(i);
            dist[i]= time[i-1];
        }
        
        int ans=0;
        while(!q.empty())
        {
            int m = q.size(), mx =0;
            while(m--)
            {
                int p = q.front(); q.pop();
                for(auto x :  adj[p])
                 {   indegree[x]--;
                  dist[x]= max(dist[x], dist[p]+time[x-1]);
                if(indegree[x]==0)
                    q.push(x);}
            }
        }
        
        for(int i : dist)
            ans = max(ans, i);
        return ans;
    }
};