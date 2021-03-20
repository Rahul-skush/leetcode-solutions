class Solution {
public:
    string addStrings(string num1, string num2) {
        string v;
        int i = num1.length()-1, j = num2.length()-1, carry = 0;
        while(i>=0 && j>=0)
        {
            int sum = num1[i] - '0' + num2[j] - '0' + carry;
            carry = sum/10;
            sum %=10;
            v += sum + '0';
            i--; j--;
        }
        
        while(i>=0)
        {
            int sum = carry + num1[i]-'0';
            carry = sum/10;
            sum = sum%10;
            v += sum + '0';
            i--;
        }
        while(j>=0)
        {
            int sum = carry + num2[j]-'0';
            carry = sum/10;
            sum = sum%10;
            v += sum + '0';
            j--;
        }
        if(carry)
        v+=carry + '0';
        reverse(v.begin(), v.end());
        return v;
    }
};
