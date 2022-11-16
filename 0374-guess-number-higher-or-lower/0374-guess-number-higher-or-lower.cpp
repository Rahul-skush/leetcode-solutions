/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long l =1, h = n;
        while(l<h)
        {
            long mid = (l+h)/2;
            int m = guess(mid);
            if(m==-1) h =mid;
            else if(m==1) l = mid+1;
            else return mid;
        }
        return l;
    }
};