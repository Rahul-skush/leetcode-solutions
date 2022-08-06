class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int x = minutesToTest/minutesToDie +1;
        int pigs =0;
        while(pow(x, pigs)<buckets)
            pigs++;
        return pigs;
    }
};