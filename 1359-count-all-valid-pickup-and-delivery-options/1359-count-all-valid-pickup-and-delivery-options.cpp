class Solution {
public:
    int countOrders(int n) {
        int mod = 1e9+7;
        int ans =1;
        for(int i=2;i<=n;i++)
        {
            long long a = 2*i -1;
            ans = ((ans%mod)*((a*(a+1)/2)%mod))%mod;
        }
        
        return ans;
    }
};