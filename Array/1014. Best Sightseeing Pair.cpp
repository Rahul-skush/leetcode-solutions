class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& v) {
        int x = v[0] + 0, ans = 0;
        for(int i=1;i<v.size();i++)
        {
            ans = max(ans, x + v[i] -i);
            if(v[i]+i>=x)
                x = v[i] + i;
        }
        return ans;
    }
};
