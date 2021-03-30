class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        map<char, int> mp;
        for(int i=0;i<order.length();i++)
            mp[order[i]] = i;
        string tmp = "";
        for(auto s : words)
        {
            for(auto &c : s)
                c = mp[c] + 'a';
            if(tmp=="")
                tmp = s;
            else
                if(tmp>s) return 0;
            else tmp = s;
        }
        return 1;
    }
};
