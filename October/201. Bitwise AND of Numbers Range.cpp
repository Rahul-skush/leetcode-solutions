class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int sum =0;
        for(int i=31;i>=0;i--)
        {
            int x = 1<<i;
            bool l = x&left, r = x&right;
            if(l && r) sum += x;
            else if(l==0 && r==0) continue;
            else break;
        }
        return sum;
    }
};
