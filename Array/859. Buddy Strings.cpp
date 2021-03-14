class Solution {
public:
    bool buddyStrings(string a, string b) {
        if(a.length()!=b.length()) return 0;
        int frq[26] ={0}, f =0, cnt =0, x =-1, y =-1;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]!=b[i])
            { 
                cnt++;
                if(x==-1) x = i;
                else
                    if(y==-1) y =i;
            }
            frq[a[i]-'a']++;
            if(frq[a[i]-'a']>=2) f =1;
            if(cnt>2) return 0;
        }
        if(cnt==2) 
        {
            return (a[x]==b[y] && a[y]==b[x]);
        }
        if(cnt==1) return 0;
        return f;
    }
};
