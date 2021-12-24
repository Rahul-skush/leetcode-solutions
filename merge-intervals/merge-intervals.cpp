class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        
        vector<vector<int>> res;
        int start = -1, end= -1, f =0;
        for(auto x : intervals)
        {
            if(end<x[0])
            {
                if(f)
                res.push_back({start, end});
                else f =1;
                start = x[0];
                end = x[1];
            }
            else end = max(end, x[1]);
        }
        res.push_back({start, end});
        return res;
    }
};