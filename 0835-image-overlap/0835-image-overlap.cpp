class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        vector<int> v1, v2;
        int n = img1.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            { 
            if(img1[i][j])
                    v1.push_back(i*100+j);
            if(img2[i][j])
                    v2.push_back(i*100+j);
            }
        }
        
        map<int, int> cnt;
        for(auto x : v1)
        {
            for(auto y: v2)
                cnt[x-y]++;
        }
        
        int ans =0;
        for(auto x : cnt)
            ans = max(ans, x.second);
        return ans;
        
    }
};