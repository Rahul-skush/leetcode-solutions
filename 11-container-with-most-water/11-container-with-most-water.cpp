class Solution {
public:
    int maxArea(vector<int>& height) {
        int l =0, h = height.size()-1, ans =0;
        while(l<h)
        {
            if(height[l]<=height[h])
            {
                ans = max(ans, height[l]*(h-l));
                l++;
            }else{
                  ans = max(ans, height[h]*(h-l));
                h--;
            }
        }
        
        return ans;
    }
};