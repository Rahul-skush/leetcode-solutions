class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost){
        vector<vector<long long>> v;
        for(int i=0;i<nums.size();i++)
            v.push_back({cost[i], nums[i]});
        
        sort(v.begin(), v.end(), [&](vector<long long> &v1, vector<long long> &v2){
            return v1[0]>v2[0] || (v1[0]==v2[0] && v1[1]<v2[1]);
        });
        
        int  l =1, n = nums.size();
        int h = 1000000;
        long long mx = -1;
        while(l<h)
        {
            int m = (l+h)/2;
            long long sum1 =0, sum2=0;
            
            
            for(int i=0;i<n;i++)
            {
                sum1 += abs(m - v[i][1])*v[i][0];
            }
             for(int i=0;i<n;i++)
            {
                sum2 += abs(m+1 - v[i][1])*v[i][0];
            }
            
            if(sum1<=sum2)
                h = m;
            else l = m+1;
            mx = min({sum1, sum2});
        }
        
        return mx;
    }
};