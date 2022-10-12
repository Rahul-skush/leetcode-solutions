class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int a = 0, b = 0, c = 0;
        for(int i=n-1;i-2>=0;i--)
        {
            a = nums[i];
            b = nums[i-1];
            c = nums[i-2];
               if((a+b>c) && (a+c>b) && (b+c>a))
            return a+b+c;
        }
     
        return 0;
    }
};
