class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long long sum = 0;
        for(auto x : nums)
            sum += x;
        sum = goal - sum;
        sum = abs(sum);
        limit = abs(limit);
        int ans = sum%limit>0?1:0;
        return sum/limit + ans;
    }
};
