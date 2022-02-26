class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
       int n = graph.size(), ans = INT_MAX;
        for(int i=0;i<n;i++)
        {
           ans = min(ans,  bfs(i, graph));
        }
        
        return ans;
        
    }
    
    int bfs(int s, vector<vector<int>>& graph)
    {
        set<pair<int, int>> st;
        int f = (1<<graph.size())-1;
        queue<pair<int, int>> q;
        q.push({s, 1<<s});
        st.insert({s, 1<<s});
        int level = 0;
        while(!q.empty())
        {
            int n = q.size();
            
            for(int i=0;i<n;i++)
            {
                pair<int, int> p = q.front(); q.pop();
                if(p.second==f) return level;
               // cout<<p.first<<"="<<p.second<<" ";
                for(auto x : graph[p.first])
                {
                    int y = p.second | (1<<x);
                    if(st.count({x, y})) continue;
                    q.push({x, y}); st.insert({x, y});
                }
            }
            level++;
        }
        
       // cout<<endl;
        
        return level;
    }
};