class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        
        int n = prices.size(), i=0;
        long long ans =0;
        while(i<n)
        {
            long long cnt= 1;
            while(i+1<n && prices[i]-1==prices[i+1])
                 { cnt++; i+=1;}
            
            if(cnt>1) ans += find(cnt);
            i+=1;
        }
        
        return ans + n;
    }
    
    long long find(int n)
    {
       long long y =n-1;
        return y*(y+1)/2;
    }
};