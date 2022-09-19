class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        unordered_map<string, vector<string>> mp;
        
        for(auto x : paths)
        {
            stringstream ss(x);
            string str;
            ss>>str;
            string path = str;
            while(ss>>str)
            {
                string st1, st2;
                int i=0;
                for(;i<str.size();i++)
                {
                    if(str[i]=='(') break;
                    st1 += str[i];
                }
                i++;
                while(i<str.size())
                {
                    if(str[i]==')') break;
                    st2 += str[i++];
                }
                
                mp[st2].push_back(path + "/"+ st1);
            }
        }
        
        vector<vector<string>> ans;
        for(auto x : mp)
            if(x.second.size()>1)
            ans.push_back(x.second);
        return ans;
    }
};