class Solution {
public:
    bool validPalindrome(string s) {
        return find(0, s.size()-1, s, 0);
    }
    
    int find(int i, int j, string &s, int cnt)
    {
        if(cnt>1) return 0;
        if(i>=j) return 1;
        
        if(s[i]!=s[j]){
            return find(i+1, j, s, cnt+1) || find(i, j-1, s, cnt+1);
        }
        
        return find(i+1, j-1, s, cnt);
    }
};