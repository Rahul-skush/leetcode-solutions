class Solution {
public:
    int n;
    int findCircleNum(vector<vector<int>>& isConnected) {
        n = isConnected.size();
        vector<int> parent(n+1);
        for(int i=1;i<=n;i++)
            parent[i]=i;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(isConnected[i][j])
                    union_(i+1, j+1, parent);
            }
        }
        int cnt =0;
        for(int i=1;i<=n;i++)
            {if(parent[i]==i) cnt++;}
       
        
        return cnt;
    }
    
    void union_(int x, int y, vector<int>& parent)
    {
        int xx = findParent(x, parent);
        int yy = findParent(y, parent);
        if(xx!=yy)
            parent[xx] = yy;
    }
    
    int findParent(int i, vector<int>& parent)
    {
        if(parent[i]==i) return i;
        return findParent(parent[i], parent);
    }
};