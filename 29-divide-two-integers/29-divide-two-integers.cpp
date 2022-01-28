class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        long long dvd = labs(dividend), dvs = labs(divisor);
        long long ans = 0;
        int sign = dividend>0 ^ divisor>0?-1:1;
        
        while(dvd>=dvs)
        {
            long long tmp = dvs, m =1;
            
            while(tmp<=dvd)
            {
                tmp = tmp<<1;
                m = m<<1;
            }
            
            if(tmp>dvd) {tmp = tmp>>1, m = m>>1;}
            
            dvd -= tmp;
            ans += m;
        }
        
        return sign*ans;
    }
};