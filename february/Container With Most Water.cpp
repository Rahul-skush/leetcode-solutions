class Solution {
public:
    int maxArea(vector<int>& h) {
        int i = 0, j = h.size()-1;
        int ans= 0;
        while(i<=j)
        {
            int water = (j-i)*(min(h[j], h[i]));
            ans = max(ans, water);
            if(h[i]<=h[j]) i++;
            else
                j--;  
        }
        
        return ans;
    }
};
