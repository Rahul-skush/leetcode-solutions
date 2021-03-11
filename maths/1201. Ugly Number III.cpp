class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {
        long l =1, h = 20000000000;
        long ans = 0;
        while(l<=h){
            long m = (h+l)/2;
            long cnt =0;
            cnt += m/a;
            cnt += m/b;
            cnt += m/c;
            cnt -= m/lcm(a, b);
            cnt -= m/lcm(b, c);
            cnt -= m/lcm(c, a);
            cnt += m/lcm(a, lcm(b, c));
            if(cnt>=n)
            {
                ans = m;
                h = m-1;
            }else l = m+1;
        }
        return ans;
    }
    
    long lcm(long a, long b)
    {
        return a*b/(__gcd(a, b));
    }
};
