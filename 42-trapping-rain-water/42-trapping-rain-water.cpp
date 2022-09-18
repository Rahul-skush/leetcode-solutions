class Solution {
public:
    int trap(vector<int>& height) {
        int mxLeft =0, mxRight =0;
        int l = 0, r = height.size()-1, ans =0;
        while(l<r)
        {
            if(height[l]<=height[r])
            {
                mxLeft = max(mxLeft, height[l]);
                ans += mxLeft - height[l];
                l++;
            }else{
                mxRight = max(mxRight, height[r]);
                ans += mxRight - height[r];
                r--;
            }
        }
        return ans;
    }
};