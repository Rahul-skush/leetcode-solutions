class Solution {
public:
    vector<string> addOperators(string num, int target) {
        vector<string> res;
        dfs(num, target, 0, 0, 0, "", res);
        return res;
    }
    
    void dfs(string& s, int target, int pos, long cv, long pv, string r, vector<string>& res) {
        if (pos == s.size() && cv == target) {
            res.push_back(r);
            return;
        }
        for (int i = 1; i <= s.size() - pos; i++) {
            string t = s.substr(pos, i);
            if (i > 1 && t[0] == '0') continue; // preceding 
            long n = stol(t);
            if (pos == 0) {
                dfs(s, target, i, n, n, t, res);
                continue;
            }
            dfs(s, target, pos+i, cv+n, n, r+"+"+t, res);
            dfs(s, target, pos+i, cv-n, -n, r+"-"+t, res);
            dfs(s, target, pos+i, cv-pv+pv*n, pv*n, r+"*"+t, res);
        }
    }
};
