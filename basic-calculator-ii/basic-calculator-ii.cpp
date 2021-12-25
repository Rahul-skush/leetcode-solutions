class Solution {
public:
    int calculate(string s) {
         int curr = 0, lst = 0, res = 0;
        if(s.size() == 0) {
            return res;
        }
        char opr = '+';
        for(int i = 0; i<s.size(); i++) {
            char c = s[i];
            if(c>='0' && c<='9') {
                curr = curr * 10 + (c - '0');
            }
            if(((c=='-' || c=='+' || c=='/' || c=='*') && c!=' ') ||
               (i == s.size() - 1)) {
                if(opr=='+') {res += lst; lst = curr;}
                else if(opr=='-') {res += lst; lst = -curr;}
                else if(opr=='*') { lst *= curr;}
                else if(opr=='/') lst/=curr;
                curr = 0;
                opr = c;
            }
            
          } 
        
        res += lst;
        return res;
        
    }
    
};