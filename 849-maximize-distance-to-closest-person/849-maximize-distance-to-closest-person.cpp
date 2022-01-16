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
            
            //cout<<right[i]<<" ";
        }
        
        f =0; cnt =0;
        for(int i=0;i<n;i++)
        {
            if(seats[i])
            { 
                f =1;
                cnt =0;
            }else {cnt++;}
            left[i] =  {cnt, f} ;
            
            //cout<<right[i]<<" ";
        }
        
         cnt =0;
             int ans =0;
        for(int i=0;i<n;i++)
        {
            if(seats[i]) cnt =0;
            else cnt++;
            
            if(right[i][1]==0 || left[i][1]==0)
            {
                ans = max({ans, left[i][0], right[i][0]});
               // cout<< max(left[i][0], right[i][0])<<" ";
            }else
            {ans = max(ans, min(left[i][0], right[i][0]));
            //cout<< min(left[i][0], right[i][0])<<" ";
            }
        }
        //cout<<endl;
        return ans;
    }
};