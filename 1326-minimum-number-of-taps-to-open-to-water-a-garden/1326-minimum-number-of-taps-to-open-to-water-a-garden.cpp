class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        int mx =0, ans =0;
        n++;
        while(mx<n-1)
        {
            ans++;
            int mnx =0;
            for(int i=0;i<n;i++)
            {
                if(i-ranges[i]<=mx)
                {
                    mnx = max(mnx, i+ranges[i]);
                }
            }
            
            if(mx>=mnx) return -1;
            mx = mnx;
        }
        
        return ans;
    }
};