class Solution {
public:
    bool judgeSquareSum(int c) {
        int x = sqrt(c);
        
        for(int i=0;i<=x;i++)
        {
            int y = i*i;
            int z = (c - y);
            int k = sqrt(z);
            if(z==k*k) return 1;
        }
        return 0;
    }
};
