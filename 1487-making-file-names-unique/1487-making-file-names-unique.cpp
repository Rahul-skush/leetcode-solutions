class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
             unordered_map<string, int> map;
        vector<string> output;
        for(auto name : names) {
            string val = name; int i = map[val];
            while(map[val] > 0) {
                val = name + "(" + to_string(i++) + ")";
                map[name] = i;
            }
            map[val]++;
            output.push_back(val);
        }
        return output;
    }
};