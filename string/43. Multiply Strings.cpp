class Solution {
public:
    string multiply(string s1, string s2) {
        if((s1.length()==1 && s1[0]=='0') || (s2.length()==1 && s2[0]=='0') ) return "0";
        if(s1.length()<s2.length())
            swap(s1, s2);
        vector<vector<int>> v;
        int k = 0, m = 0;
        for(int i = s2.length()-1;i>=0;i--)
        {
            int n = s2[i] - '0';
            int carry = 0, x = 0;
            vector<int> tmp;
            while(x<k)
                {tmp.push_back(0); x++;}
            k++;
            for(int j = s1.length()-1;j>=0;j--)
            {
                int m = s1[j] - '0';
                m = m*n  + carry;
                carry = m/10;
                m%=10;
                tmp.push_back(m);
            }
            if(carry!=0) tmp.push_back(carry);
            int siz = tmp.size();
            m = max(m, siz);
            v.push_back(tmp);
        }
        
        string ans;
        int j  =0, n = v.size();
      int  carry = 0;
        while(j<m)
        {
            int sum = 0;
            for(int i = 0;i<n;i++)
            {
                if(j<v[i].size())
                sum += v[i][j];
            }
            
            sum += carry;
            ans += sum%10 + '0';
            carry = sum/10;
            j++;
        }
        if(carry)
            ans += carry + '0';
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
