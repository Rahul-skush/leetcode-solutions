class Solution {
public:
    int minimumBoxes(int n) {
        int diagsiz = 0, lstdiag =0;
        while(n - (diagsiz+1)*(diagsiz+2)/2>0)
        {
            ++diagsiz;
            n -= diagsiz*(diagsiz+1)/2;
        }
        
        while(n>0)
        {
            n -= ++lstdiag;
        }
        
        return diagsiz*(diagsiz+1)/2 + lstdiag;
    }
};
