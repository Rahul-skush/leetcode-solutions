class Solution {
public:
    int getMaximumConsecutive(vector<int>& coins) {
    int res = 1;
        sort(coins.begin(), coins.end());
        for(auto x : coins)
        {
            if(x<=res)
                res += x;
            else return res;
        }
        return res;
    }
};
