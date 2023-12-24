class Solution {
public:
    int minOperations(string s) {
       int cnt1 = 0,cnt0 = 0;
        for(int i=0;i<s.size();i++)
        {
            if(i%2)
            {
                if(s[i]=='1')cnt0+=1;
                if(s[i]=='0') cnt1+=1;
            }else{
                if(s[i]=='1')cnt1+=1;
                if(s[i]=='0') cnt0+=1;
            }
        }
        return min(cnt1, cnt0);
    }
};