class Solution {
public:
    int findComplement(int num) {
        int ans = 0;
        int n = 0;
        for(int i=0;i<31;i++)
            if(1<<i & num) n = i;
        for(int i=0;i<=n;i++)
        {
            if((1<<i & num)==0) ans += 1<<i;
        }
        return ans;
    }
};
