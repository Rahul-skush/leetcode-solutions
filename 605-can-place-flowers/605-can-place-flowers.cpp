class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return 1;
        int i =0, cnt =0, m = flowerbed.size(), ans =0;
        while(i<m && flowerbed[i]==0)
            {cnt++; i++;}
        
        if(cnt)
        {
            if(i<m) cnt-=1;
            if(cnt>0)
            ans = (cnt/2) + cnt%2;
        }
        if(i==m) return ans>=n;
        int j = m-1;
        cnt =0;
        while(j>i && flowerbed[j]==0)
            {cnt++; j--;}
        if(j>=i)
        {
            cnt-=1;
            if(cnt>0)
            ans += cnt/2 + cnt%2;
        }
        if(j==-1) return ans>=n;
        cnt=0;
        while(i<j)
        {
            if(flowerbed[i])
            {
                cnt -=2;
                if(cnt>0)
                ans += cnt/2 + cnt%2;
                cnt =0;
            }else cnt++;
            i++;
        }
        
              cnt -=2;
                if(cnt>0)
                ans += cnt/2 + cnt%2;
                cnt =0;
        //cout<<ans<<"\n";
        return ans>=n;
    }
};