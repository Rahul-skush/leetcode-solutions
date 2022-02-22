class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long  p = 1;
        long long ans =0;
        for(int i=columnTitle.size()-1;i>=0;i--)
            {ans += p*(columnTitle[i]-'A'+1); p= p*26;}
        return ans;
    }
};