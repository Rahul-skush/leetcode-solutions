class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();
        int ans= INT_MAX;
        for(int i=0;i<graph.size(); i++)
        {
            ans = min(ans,  find(graph, i, n));
        }
        
        return ans;
    }
    
    int find(vector<vector<int>>& graph, int s, int n)
    {
        set<pair<int, int>> st;
        int fn = (1<<n) - 1;
        st.insert({s, 1<<s});
        queue<pair<int, int>> q;
        q.push({s, 1<<s});
            int level =0;
            while(!q.empty())
            {
                int m = q.size();
                level++;
                while(m--)
                {
                    pair<int, int> p = q.front(); q.pop();
                    
                    if(p.second==fn) return level-1;
                    for(auto x : graph[p.first])
                    {
                        int y = p.second | 1<<x;
                        if(st.count({x, y})==0)
                            {st.insert({x, y}); q.push({x, y});}
                    }
                }
            }
        return level-1;
    }
};