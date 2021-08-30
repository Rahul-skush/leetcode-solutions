class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0) return m*n;
        int x =m, y =n;
        for(auto i : ops)
            x = min(x, i[0]), y = min(y, i[1]);
        
        return x*y;
    }
};
