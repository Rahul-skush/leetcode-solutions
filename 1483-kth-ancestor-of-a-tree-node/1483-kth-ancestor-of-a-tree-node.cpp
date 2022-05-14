class TreeAncestor {
public:
    int dp[50005][29];
    int mx;
    TreeAncestor(int n, vector<int>& parent) {
        memset(dp, -1, sizeof(dp));
            mx = (int)ceil(log2(n));
        
         for (int i = 0; i < n; i++) dp[i][0] = parent[i];
        for (int j = 1; j < 20; j++) {
            for (int i = 0; i < n; i++) {
                if (dp[i][j - 1] == -1) dp[i][j] = -1;
                else dp[i][j] = dp[dp[i][j - 1]][j - 1];
            }
        }
            
    }
    
    int getKthAncestor(int node, int k) {
        
        for(int i=0;i<=mx;i++)
        {
            if(k&(1<<i))
                node= dp[node][i];
            if(node==-1) return -1;
        }
        return node;
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */