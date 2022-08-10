class MagicDictionary {
public:
    map<int, vector<string>> mp;
    MagicDictionary() {
        
    }
    
    void buildDict(vector<string> dictionary) {
        for(auto x : dictionary)
            mp[x.size()].push_back(x);
    }
    
    bool search(string searchWord) {
        for(int i=0;i<mp[searchWord.size()].size();i++)
        {
            if(check(searchWord, mp[searchWord.size()][i])) return 1;
        }
        return 0;
    }
    
    bool check(string s, string p)
    {
        int f= 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=p[i])
            {
                if(f) return 0;
                f =1;
            }
        }
        return f;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dictionary);
 * bool param_2 = obj->search(searchWord);
 */