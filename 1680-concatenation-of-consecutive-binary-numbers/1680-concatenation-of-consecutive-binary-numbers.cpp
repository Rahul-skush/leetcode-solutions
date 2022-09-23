class Solution {
public:
    int mod = 1000000007;
    int concatenatedBinary(int n) {
        long sum = 0;
        for(int i=1;i<=n;i++)
        {
            int m = i, len =0;
            while(m>0)
            {
                ++len;
                m>>=1; 
            }
             sum = ((sum << len) + i) % mod;
        }
        return sum;
    }
    
};