class Solution {
public:
    vector<int> diStringMatch(string S) {
      vector<int> res;
        int i = 0, j = S.length();
        for(auto c :S)
        {
            if(c=='I')
                res.push_back(i++);
            else
            res.push_back(j--);
        }
        res.push_back(i++);
        return res;
    }
};
