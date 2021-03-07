class Solution {
public:
    unordered_map<int, int> mp;
    int dp[6001][2];
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
    for(auto y : forbidden)
        mp[y] = 1;
        memset(dp,-1,sizeof(dp));
        int res =  findjump(0, 0, a, b, x);
        return res>=1e9?-1: res;
    }
    
  int  findjump(int pos,int c, int a, int b, int x)
    {
      if(pos == x) return 0;
      if(pos<0 || pos>6000 || c>=2 || mp.find(pos)!=mp.end()) return 1e9;
      if(dp[pos][c]!=-1) return dp[pos][c];
      dp[pos][c] = 1 + findjump(pos + a, 0, a, b, x);
    
         if(!c) dp[pos][c] = min(dp[pos][c], 1 + findjump(pos-b, c+1, a, b, x));
      return dp[pos][c];
    }
};
