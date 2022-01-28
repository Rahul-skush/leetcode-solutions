class Solution {
public:
    bool winnerOfGame(string colors) {
        int cnta =0, cntb = 0, n = colors.size();
        for(int i=0;i<n;)
        {
            int cnt=0;
            while(i<n && colors[i]=='A') {cnt++; i++;}
            
            if(cnt>=3)
            cnta += cnt-2;
            i++;
        }
        
        for(int i=0;i<n;)
        {
            int cnt=0;
            while(i<n && colors[i]=='B') {cnt++; i++;}
            
            if(cnt>=3)
            cntb += cnt-2;
            i++;
        }
        
        return cnta>cntb;
    }
};