class Solution {
public:
    vector<string> wordSubsets(vector<string>& A, vector<string>& B) {
        int frqB[26] = {0};
        vector<string> v;
        for(auto s : B)
        {
            int frqd[26] = {0};
            for(auto c :s)
               frqd[c-'a']++;
            for(int i=0;i<26;i++)
                frqB[i] = max(frqB[i], frqd[i]);
        }
        
        for(auto s : A)
        {
            int frqd[26] = {0};
            int f = 0;
                 for(auto c :s)
               frqd[c-'a']++;
              for(int i=0;i<26;i++)
                if(frqd[i]<frqB[i]) {f =1; break;}
            if(!f) v.push_back(s);
        }
        return v;
    }
};
