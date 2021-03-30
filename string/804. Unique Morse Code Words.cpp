class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> s;
        for(auto str : words)
        {
            string tmp;
            for(auto c : str)
                tmp += dirs[c - 'a'];
            s.insert(tmp);
        }
        return s.size();
    }
    
    vector<string> dirs = {{".-"},{"-..."},{"-.-."},{"-.."},{"."},{"..-."},{"--."},{"...."},{".."},{".---"},{"-.-"},{".-.."},{"--"},{"-."},{"---"},{".--."},{"--.-"},{".-."},{"..."},{"-"},{"..-"},{"...-"},{".--"},{"-..-"},{"-.--"},{"--.."}};
};
