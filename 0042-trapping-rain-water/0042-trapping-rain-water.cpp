class Solution {
public:
    int trap(vector<int>& height) {
       int maxleft = 0, maxright = 0;
        int l = 0, r = height.size()-1;
        int ans =0;
        
        while(l<r)
        {
            if(height[l]<=height[r])
            {
                maxleft = max(maxleft, height[l]);
                ans += maxleft - height[l];
                l++;
            }else{
                 maxright = max(maxright, height[r]);
                ans += maxright - height[r];
                r--;
            }
        }
        return ans;
        
    }
};