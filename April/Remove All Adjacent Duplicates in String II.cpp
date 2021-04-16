class Solution {
public:
    string removeDuplicates(string s, int k) {
      
        while(1)
        {
                string str = "";
                int cnt =1;
                for(int i=1;i<s.length();i++)
                {
                    if(s[i]==s[i-1])
                        cnt++;
                    else
                        { 
                         concateIt(str, cnt%k, s[i-1]); cnt =1;
                        }
                }
                    concateIt(str, cnt%k, s[s.length()-1]);
                    if(s.length()==str.length()) return str;
                    s = str;
          }
        return s;
    }
    
  void  concateIt(string &s, int cnt, char c)
    {
        while(cnt--)
            s +=c;
    }
};
