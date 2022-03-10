class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left =0, right = n-1, leftmax = 0, rightmax = 0;
        int ans =0;
        while(left<right)
        {
            if(height[left]<=height[right])
            {
                leftmax = max(leftmax, height[left]);
                ans = max(ans, leftmax*(right-left));
                    left++;
            }else{
                rightmax = max(rightmax, height[right]);
                ans = max(ans, rightmax*(right-left));
                    right--;
            }
        }
        
        return ans;
    }
};