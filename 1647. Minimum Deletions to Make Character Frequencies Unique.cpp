class Solution {
public:
    int minDeletions(string s) {
        int vis[100004] = {0};
        int a[256] = {0};
        for(auto c : s)
            a[c-'a']++;
        
        sort(a, a+256);
        int ans =0;
        for(int i=0;i<256;i++)
        {
            if(a[i]==0) continue;
            if(vis[a[i]]==0)
                vis[a[i]] = 1;
            else
            {
                int x = a[i];
                while(x>0 && vis[x]!=0)
                    x--;
                vis[x] =1;
                ans += a[i] - x;
            }
        }
        return ans;
    }
};
