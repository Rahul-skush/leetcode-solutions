class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
      sort(pairs.begin(), pairs.end());
        int n  = pairs.size();
        vector<int> v(n, 1);
        
        for(int i=1;i<n;i++)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(pairs[i][0]>pairs[j][1])
                    v[i] = max(v[i], v[j]+1);
            }
            //cout<<v[i]<<" ";
        }
        return v[n-1];
    }
};