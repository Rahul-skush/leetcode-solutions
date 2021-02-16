class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> res;
        findPermt(S, res, 0);
        return res;
    }
    
    void findPermt(string S, vector<string>& res, int s)
    {
         res.push_back(S);
        if(s>=S.length()) return ;
      
        for(int i=s;i<S.length();i++)
        {
            if(S[i]>='0' && S[i]<= '9') continue;
            char c = S[i];
            char r;
            if(c>='a' && c <= 'z')
                r = toupper(c);
            else
                r = tolower(c);
            S[i] =r;
            
            findPermt(S, res, i+1);
            S[i] = c;
        }
    }
};
