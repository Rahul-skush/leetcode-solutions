class Solution {
public:
    
    int primePalindrome(int n) {
        if(n>=8 && n<=11) return 11;
        if(n<=2) return 2;
        if(n==3) return 3;
        if(n<=5) return 5;
        if(n<=7) return 7;
        
        for(int i=1;i<=100000;i++)
        {
            string s = to_string(i);
            string t = s;
            reverse(t.begin(), t.end());
            s = s + t.substr(1);
            int x = stoi(s);
            if(x>=n && isPalin(s, x))
                return stoi(s);
        }
        return -1;
    }
    
    bool isPalin(string s, int x)
    {
        if(x%2==0) return 0;
        for(int k=2;k<=sqrt(x);k++)
            if(x%k==0) return 0;
              
        return 1;
    }
};
