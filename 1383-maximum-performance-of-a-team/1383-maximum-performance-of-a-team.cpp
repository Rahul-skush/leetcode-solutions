class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<vector<int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({efficiency[i], speed[i]});
        }
        
        sort(v.rbegin(), v.rend());
        long long  ans = 0, sum =0;
        int mod = 1e9+7;
        
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i=0;i<n;i++)
        {
            if(!pq.empty() && pq.size()>=k)
            {
                int t = pq.top(); pq.pop();
                sum -= t;
            }
            pq.push(v[i][1]);
            sum += v[i][1];
            ans = max(ans, (sum*v[i][0]));
        }
        
        return ans%mod;
    }
};