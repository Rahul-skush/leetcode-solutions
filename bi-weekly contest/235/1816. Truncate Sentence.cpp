class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream S(s);
        string w;
        string ans;
        while(k--)
        {
            S>>w;
            ans += w;
            if(k!=0)
            ans += " ";
        }
        return ans;
    }
};
