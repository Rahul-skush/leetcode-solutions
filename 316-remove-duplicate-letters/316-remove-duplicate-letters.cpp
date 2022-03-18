class Solution {
public:
    string removeDuplicateLetters(string s) {
        string str;
        int frq[26] = {0};
        for(auto c : s)
            frq[c-'a']++;
        unordered_set<char> st;
        for(auto c : s)
        {
            frq[c-'a']--;
            if(st.count(c)) continue;
            while(str.size() && str.back()>=c && frq[str.back()-'a'])
                 {
                  st.erase(str.back()); str.pop_back();
                 }
            str.push_back(c);
            st.insert(c);
        }
        
        
        return str;
    }
};