class Solution {
public:
    bool canMeasureWater(int j1, int j2, int tc) {
       if(j1 + j2<tc) return 0;
        if(j1==tc || j2 ==tc || j1+j2 ==tc) return  1;
        return tc%__gcd(j1, j2)==0;
    }
};
