class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
           int trans = 0;
        while(m != n) 
        {
            ++ trans;
            m >>= 1;
            n >>= 1;
        }
        return m << trans;
    
    }
    
   
};
