class Solution {
public:
    vector<int> ans;
    vector<int> smallestMissingValueSubtree(vector<int>& parents, vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> adj(parents.size());
        for(int i=1;i<parents.size();i++)
            adj[parents[i]].push_back(i);
        ans.resize(n, 1);
        vector<bool> vis(100005, 0);
       
        int pos = find(begin(nums), end(nums), 1) - begin(nums), min =1;
        
        for(; pos!=-1 && pos<nums.size() ; pos = parents[pos])
        {
            dfs(pos, nums, vis, adj);
            while(vis[min]) min++;
            
            ans[pos] = min;
                
        }
        return ans;
    }
    
    void dfs(int u, vector<int> &nums, vector<bool> &vis, vector<vector<int>> &adj)
    {
        vis[nums[u]] = 1;
       
        for(int x : adj[u])
          if(!vis[nums[x]])
            {
               dfs(x, nums, vis, adj);
            }
        
    }
};
