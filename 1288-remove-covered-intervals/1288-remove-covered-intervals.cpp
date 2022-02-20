class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& v) {
        int n = v.size();
        sort(v.begin(), v.end(), [&](vector<int> &v1, vector<int>&v2){
            return v1[0]<v2[0] || (v1[0]==v2[0] && v1[1]>v2[1]);
        });
        
        int start = v[0][0], end = v[0][1], cnt =1;
        for(int i=1;i<n;i++)
        {
            if(v[i][0]>=start && v[i][1]<=end) continue;
            else {start = v[i][0], end = v[i][1]; cnt++;}
        }
        
        return cnt;
        
    }
  
};