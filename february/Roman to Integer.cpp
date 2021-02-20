class Solution {
public:
    int romanToInt(string s) {
        int n = s.length(), ans =0;
        for(int i=0;i<n;i++)
        {
            int x , y = INT_MIN;
            x = findValue(s[i]);
            if(i+1<n) y = findValue(s[i+1]);
            if(x<y)
                {ans += y - x; i++;}
            else
            ans += x;
        }
        return ans;
    }
    
    int findValue(char c)
    {
        switch(c)
        {
             case 'I' : return 1; break;
             case 'V' : return 5; break;
             case 'X' : return 10; break;
             case 'L' : return 50; break;
             case 'C' : return 100; break;
             case 'D' : return 500; break;
             case 'M' : return 1000; break;
             default  : return -1;     
        }
        return -1;
    }
};
