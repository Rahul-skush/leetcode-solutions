class Solution {
public:
    vector<int> recoverArray(int n, vector<int>& sums) {
        vector<int> res;
    sort(begin(sums), end(sums));
    while (sums.size() > 1) {
        vector<int> l, r;
        int num = sums[1] - sums[0], left = false;
        int i =0, j =0;
        for (; i < sums.size(); ++i)
            if (sums[i] != INT_MIN) {
                left |= sums[i] == 0;
                l.push_back(sums[i]);
                r.push_back(sums[i] + num);
                for (j = max(j + 1, i + 1); sums[j] != sums[i] + num; ++j);
                sums[j] = INT_MIN;                    
            }
        res.push_back(num * (left ? 1 : -1));
        swap(sums, left ? l : r);
    }
    return res;
    }
};