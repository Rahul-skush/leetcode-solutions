class Solution {
public:
    int maxValue(int n, int i, int maxSum) {
        int l = 0, r= maxSum, j = n - i -1;
        while(l<r)
        {
            long m = (l+r +1)/2;
            long need = m*m - ((m>i?(m-i)*(m-i-1):0) +
                               (m>j?(m-j)*(m-j-1):0))/2;
            if(need<=maxSum - n)
                l = m;
            else r = m-1;
        }
        return l+1;
        
        
    }
};