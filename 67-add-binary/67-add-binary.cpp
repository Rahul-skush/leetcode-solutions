class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1, j = b.size()-1;
        string s;
        int carry =0;
        while(i>=0 && j>=0)
        {
            int c = (a[i]-'0') + (b[j]-'0') + carry;
            if(c==3)
            {
                s += '1';
                carry =1;
            }else if(c==2)
            {
                s += '0';
                carry =1;
            }else if(c==1)
            {
                s += '1';
                carry = 0;
            }else {
                s += '0';
                carry =0;
            }
            i--; j--;
        }
        
        while(i>=0)
        {
            int c = (a[i] -'0') + carry;
            if(c==2)
            {
                s += '0';
                carry =1;
            }else if(c==1)
            {
                s += '1';
                carry = 0;
            }else {
                s += '0';
                carry =0;
            }
            i--;
        }
        
        while(j>=0)
        {
            int c = (b[j] -'0') + carry;
            if(c==2)
            {
                s += '0';
                carry =1;
            }else if(c==1)
            {
                s += '1';
                carry = 0;
            }else {
                s += '0';
                carry =0;
            }
            j--;
        }
        if(carry) s+='1';
        
        reverse(s.begin(), s.end());
        return s;
    }
};