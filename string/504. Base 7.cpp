class Solution {
public:
    string convertToBase7(int num) {
        int sign = num<0? -1: 1;
        string s;
        num = abs(num);
        while(num)
        {
            s += num%7 + '0';
            num/=7;
        }
        if(sign==-1) s += "-";
        reverse(s.begin(), s.end());
        return s==""?"0":s;
    }
};
