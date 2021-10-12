/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long l = 1, h = n;
        while(l<h)
        {
            long long m = (l+h)/2;
           int x = guess(m);
            if(x==0) return m;
            if(x==1)
                l = m+1;
            else h = m;
        }
        return l;
    }
};
