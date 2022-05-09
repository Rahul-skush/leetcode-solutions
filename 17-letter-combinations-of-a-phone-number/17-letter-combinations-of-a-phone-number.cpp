class Solution {
public:
    vector<string> res;
    map<int, string> mp = {{2, "abc"},  {3, "def"}, {4, "ghi"}, {5, "jkl"}, {6, "mno"},
                           {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}};
    vector<string> letterCombinations(string digits) {
        string s;
        if(digits.size()==0) return {};
        find(0, digits, s);
        return res;
    }
    
    void find(int i, string &digits, string &s)
    {
        if(i>=digits.size()) {res.push_back(s); return ;}
        
        for(auto x : mp[digits[i]-'0'])
        {
            s.push_back(x);
            find(i+1, digits, s);
            s.pop_back();
        }
    }
};