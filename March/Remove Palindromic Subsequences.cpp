class Solution {
public:
    int removePalindromeSub(string s) {
        if(s=="") return 0;
        if(checkpalind(s)) return 1;
        else return 2;
    }
    
    bool checkpalind(string str)
    {
        int s =0, e = str.length()-1;
        while(s<=e && str[s]==str[e]) {
            s++; e--;
        }
        if(s>e) return true;
        return false;
    }
};
