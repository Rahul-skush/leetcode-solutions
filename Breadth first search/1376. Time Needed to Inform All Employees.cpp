class Solution {
public:
   
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& iT) {
        vector<int> adj[n];
         int ans = 0;
        for(int i=0;i<manager.size();i++)
        {
            if(manager[i]!=-1)
            adj[manager[i]].push_back(i);
        }
        
         queue<pair<int, int>> q;
        q.push({headID, iT[headID]});
      
        while(!q.empty())
        {
            pair<int, int> p = q.front();
            q.pop();
            int s = p.first;
            for(auto x : adj[s])
           {
             q.push({x, p.second + iT[x]});
           }
            ans = max(ans, p.second);
        }
        return ans;
    }
};
