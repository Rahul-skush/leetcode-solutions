class Solution {
public:
    char d = 'N';
    int i = 0, j =0;
    bool isRobotBounded(string instructions) {
         findPair(instructions);
         findPair(instructions);
         findPair(instructions);
         findPair(instructions);
        if(i==0 && j==0) return 1;
        return 0;
    }
    
    void findPair( string s)
    {
        for(int k=0;k<s.length();k++)
        {
            if(s[k]=='G') 
            {
                if(d=='S') j--;
                else if(d=='E') i++;
                else if(d=='W') i--;
                else if(d=='N') j++;
                    
            }else
                if(s[k]=='L') {
                    if(d == 'N') d = 'W';
                    else if(d == 'W') d = 'S';
                    else if(d == 'S') d = 'E';
                    else if(d == 'E') d = 'N';
                }else {
                    if(d == 'N') d = 'E';
                    else if(d == 'W') d = 'N';
                    else if(d == 'S') d = 'W';
                    else if(d == 'E') d = 'S';
                }
        }
        
        return ;
    }
};
