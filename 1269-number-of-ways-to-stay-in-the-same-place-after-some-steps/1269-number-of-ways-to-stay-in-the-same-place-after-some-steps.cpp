static int MOD=1e9+7;
class Solution {
public:
    vector<vector<int>> memo;
    int arrLen;
    int dp(int i, int steps)
    {
        if(steps==0&&i==0)                                    
            return 1;
        if(i<0||i>=arrLen||steps==0||i>steps)				
            return 0;
        if(memo[i][steps]!=-1)        
            return memo[i][steps];
        return memo[i][steps]=((dp(i+1,steps-1)%MOD+dp(i-1,steps-1))%MOD+dp(i,steps-1))%MOD;               
    }
    int numWays(int steps, int arrLen) 
    {
        memo.resize(steps/2+1,vector<int>(steps+1,-1));
        this->arrLen=arrLen;
        return dp(0,steps);
    }
};