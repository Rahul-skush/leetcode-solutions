class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        int n = tasks.size();
        for(int i=0;i<n;i++)
            tasks[i].push_back(i);
        sort(tasks.begin(), tasks.end());
        
        priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
        
       // pq.push({tasks[0][1], tasks[0][2], tasks[0][0]});
        int i=0;
        long long t = 0;
        vector<int> ans;
        while(pq.size() || i<n)
        {
            if(pq.empty())
                t = max(t, (long long)tasks[i][0]);
            while(i<n && tasks[i][0]<=t)
                {pq.push({tasks[i][1], tasks[i][2], tasks[i][0]});
                ++i;}
            vector<int> v = pq.top(); pq.pop();
            ans.push_back(v[1]);
            t += v[0];
        }
        
        return ans;
    }
};