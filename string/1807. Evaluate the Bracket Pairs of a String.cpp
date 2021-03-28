class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        map<string, string> mp;
        for(auto x : knowledge)
            mp[x[0]] = x[1];
        
        string res="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                string str;
                i++;
                while(s[i]!=')')
                    str += s[i++];
                if(mp.find(str)!=mp.end())
                    res += mp[str];
                else res += "?";
            }else
                res+=s[i];
        }
        return res;
    }
};
