class Solution {
public:
    int n;
    int minJumps(vector<int>& arr) {
         n = arr.size();
        vector<int> dp(n, -1);
        unordered_map<int, vector<int>> mp;
        for(int i=0;i<n;i++)
            mp[arr[i]].push_back(i);
        
        queue<int> q;
        q.push(0);
        int cnt=0;
        while(!q.empty())
        {
            int m = q.size();
            while(m--)
            {
            int i = q.front();  q.pop();
            if(i==n-1) return cnt;
                if(i+1<n && dp[i+1]==-1)
                {q.push(i+1);}
                if(i-1>=0 && dp[i-1]==-1)
                {q.push(i-1);}
                
                if(dp[i]==-1)
                for(auto it : mp[arr[i]])
                {
                    if(dp[it]==-1)
                        {q.push(it);
                        dp[it] =0;}
                }
                dp[i] = 0;
            }
            cnt++; 
        }
        
        return n-1;
    }
    
};