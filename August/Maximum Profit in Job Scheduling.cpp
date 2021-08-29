class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<vector<int>> jobs ;
        int n = 0;
        for(int i=0;i<endTime.size();i++)
          {  jobs.push_back({endTime[i], startTime[i], profit[i]});
         n = max(endTime[i], n);}
        
     
        sort(jobs.begin(), jobs.end());
        map<int, int> dp = {{0, 0}};
        for (auto& job : jobs) {
            int cur = prev(dp.upper_bound(job[1]))->second + job[2];
            if (cur > dp.rbegin()->second)
                dp[job[0]] = cur;
        }
        return dp.rbegin()->second;
        
    }
};
