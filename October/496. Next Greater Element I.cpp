class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      
        int n = nums2.size();
        
        
        vector<int> v;
        for(int i=0;i<nums1.size();i++)
        {
            int j=0;
            for(;j<n;j++)
             if(nums1[i]==nums2[j]) break;
            //cout<<j<<" ";
            if(j==n){ v.push_back(-1); continue;}
            j+=1;
            int f =0;
            for(;j<n;j++)
                if(nums2[j]>nums1[i])
                    {v.push_back(nums2[j]); f =1; break;}
            if(f==0)v.push_back(-1);
        }
        return v;
    }
};
