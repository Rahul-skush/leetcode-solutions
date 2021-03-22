class Solution {
public:
    int thirdMax(vector<int>& nums) {
         long long a, b, c;
    a = b = c = LLONG_MIN;
    for (auto num : nums) {
        if (num <= c || num == b || num == a) continue;
        c = num;
        if (c > b) swap(b, c);
        if (b > a) swap(a, b);
    }
    return c == LLONG_MIN ? a : c;
    }
};
