class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<vector<long long>, vector<vector<long long>>, greater<vector<long long>>> pq;
        for(auto x : points)
        {
            long long y = x[0]*x[0] + x[1]*x[1];
            long long x1 = x[0], x2 = x[1];
            pq.push({y, x1, x2});
        }
        
        vector<vector<int>> ans;
        while(!pq.empty() && k--)
        {
            vector<long long> v = pq.top(); pq.pop();
            ans.push_back({(int)v[1], (int)v[2]});
        }
        
        return ans;
    }
};