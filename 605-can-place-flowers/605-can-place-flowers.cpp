class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0) return 1;
        int i =-2, j =0, m = flowerbed.size(), ans =0;
        while(j<m)
            {
                if(flowerbed[j])
                {
                  int  cnt = j-i-1 -2;
                    if(cnt>0)
                       ans += (cnt/2) + cnt%2;
                    if(ans>=n) return 1;
                    i=j;
                }
              j++;
            }
        int  cnt = j-i-1 -1;
                    if(cnt>0)
                       ans += (cnt/2) + cnt%2; 
        
        return ans>=n;
    }
};