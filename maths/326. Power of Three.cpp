class Solution {
public:
    int const Max3PowerInt = 1162261467;
    bool isPowerOfThree(int n) {
        if(n<=0 || n>Max3PowerInt) return 0;
        return Max3PowerInt%n ==0;
    }
};
