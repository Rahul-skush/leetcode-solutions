class Solution {
public:
    int maximumsSplicedArray(vector<int>& nums1, vector<int>& nums2) {
        return max(find(nums1, nums2), find(nums2, nums1));
    }
    
    int find(vector<int> &nums1, vector<int> &nums2)
    {
        int sum =0, sumMx =0, ansMx =0;
        for(int i=0;i<nums1.size();i++)
        {
            sumMx += nums2[i] - nums1[i];
            if(sumMx<0)
                sumMx =0;
            ansMx = max(ansMx, sumMx);
            sum += nums1[i];
        }
        return sum + ansMx;
    }
    
  
};