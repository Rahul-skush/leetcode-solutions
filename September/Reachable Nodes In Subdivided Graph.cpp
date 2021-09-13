class Solution {
public:
    int reachableNodes(vector<vector<int>>& edges, int maxMoves, int n) {
        vector<vector<int>> adj(n, vector<int>(n, -1));
        for(auto x : edges)
            {adj[x[0]][x[1]] = x[2];
             adj[x[1]][x[0]] = x[2];}
        
        vector<bool> vis(n, 0);
        priority_queue<vector<int>> pq;
        
        pq.push({ maxMoves, 0});
        int sum =0;
        while(!pq.empty())
        {
            vector<int> v = pq.top();
            pq.pop();
            int mxMvs = v[0];
            int j = v[1];
            if(vis[v[1]]) continue;
            vis[v[1]] = 1;
           
            sum +=1;
            for(int i=0;i<adj[j].size();i++)
            {
                if(adj[j][i]!=-1){
                    int x = adj[j][i];
                int y =0;
                if( !vis[i]  && mxMvs>=adj[j][i]+1)
                    pq.push({mxMvs - (adj[j][i]+1), i});
                  
                    y= min(mxMvs, adj[j][i]);
               adj[j][i] -= y;
               adj[i][j] -= y;
                sum += y;
                //cout<<y<<" "<<j<<"->"<<i<<endl;
                }
            }
        }
        
        return sum;
    }
};
