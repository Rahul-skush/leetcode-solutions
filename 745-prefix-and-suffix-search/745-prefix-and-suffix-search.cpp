class WordFilter {
public:
    unordered_map<string, int> mp;
    
    WordFilter(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            string s = words[i];
            mp["#"+s] = i;
            for(int j=s.size()-1;j>=0;j--)
            {
                for(int k=0;k<=s.size();k++)
                {
                string str = s.substr(j) + "#" + s.substr(0, k);
                //cout<<str<<" ";
                mp[str] = i; 
                }
               
            }
        }
    }
    
    int f(string prefix, string suffix) {
        string str = suffix + "#" + prefix;
        if(mp.count(str)) return mp[str];
        return -1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */