class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n = seats.size();
        vector<int> right[n], left[n];
        int cnt =0, f =0;
        for(int i=n-1;i>=0;i--)
        {
            if(seats[i])
            { 
                f =1;
                cnt =0;
            }else {cnt++;}
            right[i] =  {cnt, f} ;
        }
        
        
        
        cnt =0;
        f =0;
             int ans =0;
        for(int i=0;i<n;i++)
        {
            if(seats[i]) {cnt =0; f =1;}
            else cnt++;
            
            if(right[i][1]==0 || f==0)
             ans = max({ans, cnt, right[i][0]});
            else
             ans = max(ans, min(cnt, right[i][0]));
            
        }
        return ans;
    }
};