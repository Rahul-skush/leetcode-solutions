class Solution {
public:
    int minCharacters(string a, string b) {
         int m = a.size(), n = b.size(), res = m + n;
        vector<int> c1(26), c2(26);
        for (char& c: a) c1[c - 'a']++;
        for (char& c: b) c2[c - 'a']++;

        for (int i = 0; i < 26; ++i) {
            res = min(res, m + n - c1[i] - c2[i]); // condition 3
            if (i > 0) {
                c1[i] += c1[i - 1];
                c2[i] += c2[i - 1];
            }
            if (i < 25) {
                res = min(res, m - c1[i] + c2[i]); // condition 1
                res = min(res, n - c2[i] + c1[i]); // condition 2
            }
        }
        return res;
    }
    
   
};
