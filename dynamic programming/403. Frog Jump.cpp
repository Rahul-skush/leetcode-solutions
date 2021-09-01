class Solution {
public:
    map<vector<int>, bool> dp;
    bool canCross(vector<int>& stones) {
        
        return find(0, 0, stones);
       // cout<<endl;
    }
    
    bool find(int k , int i, vector<int>&v)
    {
        if(dp.count({k, i})) return dp[{k, i}];
        dp[{k, i}] = false;
        
        for(int j=i+1;j<v.size();j++)
        {
            int gap = v[j] - v[i];
            if(gap<k-1) continue;
            if(gap>k+1)  return dp[{k, i}] = false;
            if(find(gap, j, v))
              return  dp[{k, i}] = true;
        }
        
        return dp[{k, i}] = i==(v.size()-1);
        
    }
};
