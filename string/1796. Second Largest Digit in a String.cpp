class Solution {
public:
    int secondHighest(string s) {
        int v[10] = {0};
        for(int  i =0;i<s.length();i++)
        {
            if(!isalpha(s[i]))
            {
                v[s[i]-'0']=1;
            }
        }
        int cnt = 0;
        for(int i =9;i>=0;i--)
        {
            if(v[i]==1) 
            {
                if(cnt==0) cnt++;
                else return i;
            }
        }
        return -1;
    }
};
