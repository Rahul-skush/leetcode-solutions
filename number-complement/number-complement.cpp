class Solution {
public:
    int findComplement(int num) {
        long long x = log2(num);
        x+=1;
        x = pow(2, x) -1;
        return x^num;
    }
};