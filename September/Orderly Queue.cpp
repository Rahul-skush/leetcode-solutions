class Solution {
public:
    string orderlyQueue(string s, int k) {
        
        if(k>1)
            {sort(s.begin(), s.end()); return s;}
        
        string ans = s;
        for(int i=0;i<s.size();i++)
        {
            ans = min(ans, s);
            string tmp = s.substr(1, s.size()-1) + s[0];
            s = tmp;
        }
        ans = min(ans, s);
        return ans;
    }
};
