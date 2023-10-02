class Solution {
public:
    bool winnerOfGame(string colors) {
        int cnta =0, cntb = 0;
        int i = 0;
        
        while(i<colors.size())
        {
            char c = colors[i];
            int cnt =0;
            while(i<colors.size() && colors[i]==c)
                {cnt+=1; i++;}
            if(cnt<=2) continue;
            if(c=='A')
                cnta += cnt-2;
            else cntb += cnt-2;
        }
        
        return cnta>cntb;
    }
};