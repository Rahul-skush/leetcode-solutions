class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        vector<vector<int>> dpUp(n, vector<int>(n, 1)), dpDown(n, vector<int>(n, 1));
        for(auto x : mines)
            dpUp[x[0]][x[1]] = dpDown[x[0]][x[1]] = 0;
            int x = n*n - mines.size();
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(dpUp[i][j]!=0)
                    dpUp[i][j] += dpUp[i-1][j];
            }
        }
        for(int i=n-2;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                if(dpDown[i][j]!=0)
                    dpDown[i][j] += dpDown[i+1][j];
            }
        }
        int ans = x>0?1:0;
        for(int i=1;i<n-1;i++)
        {
            //cout<<i;
            ans = max(ans, help(dpUp[i], dpDown[i]));
        }
        return ans;
    }
    
    int help(vector<int> dpUp, vector<int> dpDown)
    {
        int n = dpUp.size();
        vector<int> left(n ,0), right(n, 0);
        left[0]=dpUp[0]>0?1:0;
        for(int i=1;i<n;i++)
            if(dpUp[i]!=0)
                left[i] =1+ left[i-1];
        right[n-1]= dpUp[n-1]>0?1:0;
        for(int i=n-2;i>=0;i--)
            if(dpUp[i]!=0)
                right[i] =1+ right[i+1];
        int ans =0;
        for(int i=1;i<n-1;i++)
        {
            int x = min({dpUp[i], dpDown[i], left[i], right[i]});
            //cout<<i<<" "<<dpUp[i]<<" "<<dpDown[i]<<" "<<left[i]<<" "<<right[i]<<endl;
            ans = max(ans, x);
        }
        return ans;
    }
};
