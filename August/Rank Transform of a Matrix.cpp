class Solution {
public:
    int find(vector<int> &ds, int i) {
    return ds[i] < 0 ? i : ds[i] = find(ds, ds[i]);
}
void process(vector<vector<int>> &m, vector<pair<int, int>> &crds, vector<int> &cols, vector<int> &rows) {
    vector<int> ds = vector<int>(m.size() + m[0].size(), -1);
    for (auto [i, j] : crds) {
        auto pi = find(ds, i), pj = find(ds, rows.size() + j);
        if (pi != pj) {
            ds[pi] = min({ds[pi], ds[pj], -max(rows[i], cols[j]) - 1});
            ds[pj] = pi;
        }
    }
    for (auto [i, j] : crds)
        m[i][j] = rows[i] = cols[j] = -ds[find(ds, i)];
}
vector<vector<int>> matrixRankTransform(vector<vector<int>>& m) {
    int si = m.size(), sj = m[0].size(), last_val = INT_MIN;
    vector<array<int, 3>> mm;
    vector<int> rows(si), cols(sj);
    for (auto i = 0; i < si; ++i)
        for (auto j = 0; j < sj; ++j)
            mm.push_back({m[i][j], i, j});
    sort(begin(mm), end(mm), [](array<int, 3> &a, array<int, 3> &b){ return a[0] < b[0]; });
    vector<pair<int, int>> crds;
    for (auto [val, i, j] : mm) {
        if (val != last_val) {
            process(m, crds, cols, rows);
            last_val = val;
            crds.clear();
        }
        crds.push_back({i, j});
    }
    process(m, crds, cols, rows);
    return m;
}

};
