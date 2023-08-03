class Solution {
public:
    vector<string> res;
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        string s;
        find(0, digits, s);
        return res;
    }
    
    void find(int i, string &digits, string &s)
    {
        if(i==digits.size()) {res.push_back(s); return ;}
        string t = s;
        int k = digits[i] - '0';
        for(int j=0;j<v[k].size();j++)
        {
            s += v[k][j];
            find(i+1, digits, s);
            s = t;
        }
    }
    
    vector<vector<char>> v{{}, {}, {'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'},
                           {'j', 'k', 'l'}, {'m', 'n', 'o'}, {'p', 'q', 'r', 's'},
                           {'t', 'u', 'v'}, {'w', 'x', 'y', 'z'}};
};