class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
            int c1 = INT_MAX,  c2 = INT_MAX;
        for(int i: nums)
        {
            if(i<=c1) c1= i;
            else if(i<=c2) c2 = i;
            else
            return 1;
        }
        return 0;
    }
};
