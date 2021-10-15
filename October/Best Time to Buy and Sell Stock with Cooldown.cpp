class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> s0(2), s1(2), s2(2);
        s0[0] = 0;
        s1[0] = -prices[0];
        s2[0] = INT_MIN;
        
        for(int i=1;i<n;i++)
        {
            s0[i%2] = max(s0[(i-1)%2], s2[(i-1)%2]);
            s1[i%2] = max(s1[(i-1)%2], s0[(i-1)%2]-prices[i]);
            s2[i%2] = s1[(i-1)%2] + prices[i];
        }
        return max(s0[(n-1)%2], s2[(n-1)%2]);
    }
};
