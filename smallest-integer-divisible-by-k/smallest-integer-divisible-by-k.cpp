class Solution {
public:
    int smallestRepunitDivByK(int k) {
       
        
        long long x = 0;
       int prv =0;
        while(x<1000000)
        {
            prv = (prv*10 + 1)%k;
            x += 1;
            if(prv==0) return x;
        }
        
        return -1;
    }
};