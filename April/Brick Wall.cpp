class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        map<int, int> mp;
        for(auto x : wall)
        {
            int sum = 0;
            for(int i=0;i<x.size()-1;i++)
                {int y = x[i];
                sum+=y; mp[sum]++;}
        }
        int ans, n= wall.size();
        ans = n;
        for(auto x : mp)
        {
            //cout<<x.first<<" "<<x.second<<endl;
            ans = min(ans, n - x.second);
        }
        return ans;
    }
};
