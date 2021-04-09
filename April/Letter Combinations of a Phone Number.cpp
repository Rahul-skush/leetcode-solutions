class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0) return {};
        vector<string> res;
        findstr(0, digits, res, "");
        return res;
    }
    
    unordered_map<int, string> mp = {{2, "abc"}, {3, "def"}, {4, "ghi"}, {5, "jkl"}, {6, "mno"},
                                     {7, "pqrs"}, {8, "tuv"}, {9, "wxyz"}};
    
    void findstr(int p, string digits, vector<string> & res, string str)
    {
        if(p>=digits.length() || str.length() == digits.length()){
           if(str.length() == digits.length())
            res.push_back(str);
            return ;
        }
        for(int i=p;i<digits.length();i++)
        {
            int x = digits[i] - '0';
            string s = mp[x];
            for(int k=0;k<s.length();k++)
            {
                findstr(i+1, digits, res, str + s[k]);
            }
        }
    }
};
