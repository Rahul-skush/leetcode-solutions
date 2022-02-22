class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;
        while(columnNumber)
        {
            int rem = columnNumber%26;
            columnNumber/=26;
             
            if(rem==0)
                {
                ans+= 'Z';
                columnNumber-=1;}
            else ans += 'A' + rem -1;
           
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};