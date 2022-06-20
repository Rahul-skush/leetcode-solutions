class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        sort(words.begin(), words.end(), [&](string &s1, string &s2)
             {
                 return s1.size()>s2.size() || (s1.size()==s2.size()  && s1>=s2);
             });
        unordered_set<string> st;
        int ans =0 ;
        for(auto x : words)
        {
            if(st.count(x)) continue;
            for(int i=1;i<x.size();i++)
            {
                string str = x.substr(i);
                if(str!=x)
                    st.insert(str);
            }
                ans+=x.size()+1;
            st.insert(x);
        }
        return ans;
    }
};