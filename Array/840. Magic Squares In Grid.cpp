class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
       int n = grid.size(), m = grid[0].size();
        int ans =0;
        for(int i = 0;i<n;i++)
        {
            for(int j =0;j<m;j++)
            {
                vector<int> a(10, 0), vis(10, 0);
                int h =1;
                if(i+2<n && j+2<m)
                {
                    int f =0;
                    for(int k = i; k<i+3;k++)
                {
                    for(int l=j;l<j+3;l++)
                    {
                        if(grid[k][l]>9 || grid[k][l]==0 || vis[grid[k][l]]==1)
                            {f =1; break;}
                        a[h++] = grid[k][l];
                        vis[grid[k][l]] = 1;
                    }
                        if(f) break;
                }
                    if(f) continue;
                 int x = a[1] + a[2] + a[3];   
                if(x== a[4]+a[5]+a[6] && x == a[7]+a[8]+a[9] && x==a[1]+a[4]+a[7]
                   &&  x== a[2]+a[5]+a[8] && x==a[3]+a[6]+a[9] && x==a[1]+a[5]+a[9] &&
                  x== a[3]+a[5]+a[7])
                    ans++;
                 
                }
            }
        }
        return ans;
    }
};
