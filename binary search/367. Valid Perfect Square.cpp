class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return 1;
        if(num==4) return 1;
        int  l =1, h = num/2;
        while(l<=h)
        {
            long long m = (h+l)/2;
            if(m*m == num) return 1;
            if(m*m>num) h = m-1;
            else l = m+1;
        }
        return 0;
    }
};
