class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<vector<int>> v;
        for(int i=0;i<growTime.size();i++)
            v.push_back({plantTime[i], growTime[i]});
        
        sort(v.begin(), v.end(), [&](vector<int> &v1, vector<int> &v2){
            return v1[1]>v2[1]|| (v1[1]==v2[1] && v1[0]>v2[0]);
        });
        
        int ans =0, start =0;
        for(auto x :  v)
        {
            int  y = start + x[0];
            int z = y + x[1];
            ans = max(ans, z);
            start = y;
        }
        return ans;
            
    }
};