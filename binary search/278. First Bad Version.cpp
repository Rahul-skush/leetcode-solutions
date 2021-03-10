// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
       long l =1, h =n;
        while(l<=h)
        {
            int m = (h+l)/2;
            bool x = isBadVersion(m);
            bool y = isBadVersion(m-1);
            if(x && !y) return m;
            if(x) h = m-1;
            else
                l = m+1;
            }
        return l;
    }
};
