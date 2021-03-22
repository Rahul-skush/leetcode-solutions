class Solution {
public:
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_set<string>words (wordlist.begin(), wordlist.end());
        unordered_map<string, string> cap, vow;
        for(auto s : wordlist)
        {
            string Lower = toLower(s), vowel = toVowel(s);
            cap.insert({Lower, s});
            vow.insert({vowel, s});
        }
        
        for(int i=0;i<queries.size();i++)
        {
            if(words.find(queries[i])!=words.end()) continue;
            string Lower = toLower(queries[i]), vowel = toVowel(queries[i]);
            if(cap.find(Lower)!=cap.end()){
                queries[i] = cap[Lower];
            }else
                if(vow.find(vowel)!=vow.end()){
                    queries[i] = vow[vowel];
                }else
                    queries[i] = "";
        }
        return queries;
    }
    
    string toLower(string s)
    {
        for(auto &c : s)
            c = tolower(c);
        return s;
    }
    
    string toVowel(string s)
    {
        s = toLower(s);
        for(auto &c : s)
        {
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' )
                c = '#';
        }
        return s;
    }
};
