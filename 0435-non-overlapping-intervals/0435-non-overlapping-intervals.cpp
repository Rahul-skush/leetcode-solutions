class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [&](vector<int> &v1, vector<int> &v2){
            return v1[1]<v2[1] || (v1[1]==v2[1] && v1[0]<v2[0]);
        });
        
        int start = intervals[0][0], end = intervals[0][1];
        int cnt =0;
        
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0]<end)
                cnt++;
            else end = max(end, intervals[i][1]);
        }
        
        return cnt;
    }
};