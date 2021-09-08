class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        
        int n = shifts.size();
        for(int i=0;i<n;i++)
            shifts[i]%=26;
        for(int i=n-2;i>=0;i--)
            shifts[i] += shifts[i+1];
        
        for(int i=0;i<s.size();i++)
        {
            s[i] = 'a' + ((s[i]-'a') + shifts[i])%26;
        }
        return s;
    }
};
