class Solution {
public:
    int uniquePaths(int m, int n) {
        if(m==1 || n==1) return 1;
        m-=1; n-=1;
        if(n>m) swap(m, n);
        return nCr(m+n, n);
    }
    
    long long nCr(int n, int r)
    {
        long long ans =1,  j =1;
        for(int i=r+1;i<=n;i++)
        {
            ans = ans*i;
            ans/=j;
            j+=1;
        }
        return ans;
    }
};