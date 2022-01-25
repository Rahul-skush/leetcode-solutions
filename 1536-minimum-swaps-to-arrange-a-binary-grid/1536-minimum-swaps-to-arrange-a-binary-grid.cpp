class Solution {
public:
    int minSwaps(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int cnt =0;
            for(int j=n-1;j>=0;j--)
                if(grid[i][j]) break;
            else cnt++;
            
            v.push_back(cnt);
        }
        
        int i=n-1, ans =0, x =0;
        
        while(i)
        {
            int f=0;
            for(int j=x;j<n;j++)
            {
                if(v[j]>=i){
                    int cnt=0;
                    while(j>x)
                        {swap(v[j], v[j-1]); j--; cnt++;}
                    ans += cnt;
                    x++;
                    f=1;
                    break;
                }
            }
            
            if(f==0) return -1;
            i--;
        }
        if(i) return -1;
        return ans;
    }
};