class Solution {
public:
    vector<string> res;
    vector<string> restoreIpAddresses(string s) {
        traverse(0, s, "", 0);
        return res;
    }
    
    void traverse(int p, string s, string str, int dots)
    {
        if(p>s.length() || dots>4) {return;}
        if(dots==4 && p == s.length()) {
            str.erase(str.length()-1);
            res.push_back(str); return ;}
        
        string st = "";
        st += s.substr(p, 1);
        st += '.';
        traverse(p+1, s, str + st, dots +1);
        st  = "";
        st += s.substr(p, 2);
        if(st[0]!='0')
        {st += '.';
        traverse(p+2, s, str + st, dots+1);}
        st  = "";
        st += s.substr(p, 3);
        if(st[0]!='0' && st<="255")
        {st += '.';
        traverse(p+3, s, str + st, dots+1);}
    }
};
