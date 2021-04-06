class Solution {
public:
    int minOperations(int n) {
        int ans = 0;
        if(n&1) {
            n/=2; return n*(n+1);
        }
        n/=2;
        return n*n;
    }
};
