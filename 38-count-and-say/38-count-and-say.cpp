class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int i=2;i<=n;i++)
        {
            string str;
            char prv = s[0];
            int cnt =0;
            for(int i=0;i<s.size();i++)
            {
                if(prv==s[i])
                    cnt++;
                else {
                    str += to_string(cnt)+prv;
                    prv =s[i]; cnt=1;
                }
            }
            
            str += to_string(cnt)+prv;
            s = str;
        }
        return s;
    }
};