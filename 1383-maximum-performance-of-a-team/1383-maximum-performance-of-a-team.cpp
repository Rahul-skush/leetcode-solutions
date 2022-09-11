class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
       vector<vector<int>> v ;
        for(int i=0;i<n;i++)
            v.push_back({efficiency[i], speed[i]});
        sort(v.begin(), v.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        long long sum =0, ans =0;
        for(int i=n-1;i>=0;i--)
        {
             if(pq.size()>=k)
            {
                sum -= pq.top(); pq.pop();
            }
            sum += v[i][1];
            ans = max(ans, (long long)v[i][0]*sum);
            pq.push(v[i][1]);
        }
        int mod = 1e9+7;
        return ans%mod;
    }
};