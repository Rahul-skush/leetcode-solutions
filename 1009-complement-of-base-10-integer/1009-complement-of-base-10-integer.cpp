class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==1) return 0;
        if(n==0) return 1;
        
        long long x = log2(n);
        x = pow(2, x+1)-1;
        
        return x^n;
    }
};