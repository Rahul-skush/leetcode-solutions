class Solution {
public:
    string minWindow(string s, string t) {
        int frq1[256]={0}, frq2[256]={0};
        for(auto c : t)
            frq2[c-'A']++;
        int j=0;
        string res;
        int ans = INT_MAX;
        for(int i=0;i<s.size();i++)
        {
            frq1[s[i]-'A']++;
            while(check(frq1, frq2))
            {
                int sz = checkSize(frq1);
                if(ans>sz)
                {
                    res = s.substr(j, i-j+1);
                    ans = sz;
                }
                frq1[s[j]-'A']--;
                j++;
            }
        }
        return res;
    }
    
    bool check(int frq1[], int frq2[])
    {
        for(int i=0;i<256;i++)
            if(frq1[i]<frq2[i]) return 0;
        return 1;
    }
    
    int checkSize(int frq[])
    {
        int sum=0;
        for(int i=0;i<256;i++)
            sum+= frq[i];
        return sum;
    }
};