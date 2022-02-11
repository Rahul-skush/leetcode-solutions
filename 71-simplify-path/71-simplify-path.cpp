class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        stringstream ss(path);
        string tmp;
        while(getline(ss, tmp, '/'))
        {
            if(tmp=="" || tmp==".") continue;
            else if(tmp==".." && !st.empty()) st.pop_back();
            else if(tmp!="..") st.push_back(tmp);
        }
        
        string s;
        for(int i=0;i<st.size();i++)
        {
             s += "/";
            s += st[i];
        }
        if(s.size()==0) return "/";
        return s;
    }
};