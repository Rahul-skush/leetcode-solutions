class Solution {
public:
    string breakPalindrome(string pal) {
        if(pal.size()<=1) return "";
        
        for(int i=0;i<pal.size()/2;i++)
            if(pal[i]!='a'){
                pal[i] = 'a';
                return pal;
            }
        
        int m = pal.size()-1;
        pal[m] ='b';
        return pal;
    }
};