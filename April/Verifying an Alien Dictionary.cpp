class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char , int> mp;
        for(int i=0;i<26;i++)
            mp[order[i]] = i;
        for(int i=0;i<words.size();i++)
        {
            for(auto &c : words[i])
            {
                c = mp[c] + 'a';
            }
            //cout<<words[i]<<" ";
            
            if(i>0)
            {
                if(words[i-1]>words[i]) return 0;
            }
        }
       // cout<<endl;
        return 1;
        
    }
};
