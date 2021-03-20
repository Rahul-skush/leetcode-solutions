class Solution {
public:
    int mySqrt(int x) {
        int i = 1, j = x/2;
        if(x==4) return 2;
        if(x==1) return 1;
        while(i<=j)
        {
            long long m = (i+j)/2;
            if(m*m == x) return m;
            if(m*m>x) j  = m-1;
            else i =  m+1;
        }
        return i-1;
    }
};
