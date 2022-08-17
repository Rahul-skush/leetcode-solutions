class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> mp = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_set<string> st;
        
        for(auto x : words)
        {
            string str;
            for(auto c : x)
            {
                str += mp[c-'a'];
            }
            st.insert(str);
        }
        return st.size();
    }
};