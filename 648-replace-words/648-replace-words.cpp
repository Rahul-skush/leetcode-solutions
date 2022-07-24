class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        stringstream ss(sentence);
        string s, ans;
        unordered_set<string> st(dictionary.begin(), dictionary.end());
        while(ss>>s)
        {
            string str;
            for(int j=0;j<s.size();j++)
            {
                str += s[j];
                if(st.find(str)!=st.end())
                    break;
            }
            
            ans += str + " ";
        }
        ans.pop_back();
        return ans;
    }
};