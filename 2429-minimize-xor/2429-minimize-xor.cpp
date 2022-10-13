class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int cnt =0;
        for(int i=0;i<32;i++)
        {
            if(num2&(1<<i)) cnt++;
        }
        
        string s;
        for(int i=0;i<32;i++)
        {
            if(num1&(1<<i)) s+='1';
            else s+='0';
        }
        for(int i=31;i>=0;i--)
        {
            if(cnt==0) break;
            if(s[i]=='1') {s[i]='2'; cnt--;}
        }
        int sum =0;
        for(int i=0;i<32;i++)
        {
            if(s[i]=='2') sum += (1<<i);
            else if(cnt>0) {sum += (1<<i); cnt--;}
        }
        return sum;
    }
};