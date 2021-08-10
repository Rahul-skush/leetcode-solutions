class Solution {
public:
    string addStrings(string num1, string num2) {
        int carry  = 0, i =num1.size()-1, j = num2.size()-1;
        string ans ;
        while(i>=0 || j>=0)
        {
            int sum = (i>=0?(num1[i]-'0'):0) + (j>=0?(num2[j] - '0'):0) + carry;
            ans += sum%10 + '0';
            carry = sum/10;
            i--; j--;
        }
        
        if(carry) ans += carry + '0';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
