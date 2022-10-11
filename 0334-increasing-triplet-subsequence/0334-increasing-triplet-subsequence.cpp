class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int a = INT_MAX, b = INT_MAX;
        for(int i : nums)
        {
            if(i<=a) a = i;
            else if(i<=b) b = i;
            else return 1;
           
        }
        return 0;
    }
};