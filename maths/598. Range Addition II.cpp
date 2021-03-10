class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0) return m*n;
      int  x = INT_MAX, y =INT_MAX;
        for(auto val :  ops)
        {
           x =  min(val[0], x);
            y = min(val[1], y );
        }
        return x*y;
    }
};
