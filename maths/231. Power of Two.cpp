class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return 0;
        if(n==1) return 1;
        if(n%2) return 0;
        int x = log2(n);
        if(pow(2,x) == n) return 1;
        return 0;
    }
};
