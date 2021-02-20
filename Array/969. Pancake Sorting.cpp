class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int k =arr.size(), n = k;
        vector<int> res;
        while(1)
        {
          int i =0;
            for(;i<k;i++)
            {
                if(arr[i]==k)  { break;}
            }
             res.push_back(i+1);
             res.push_back(arr[i]);
            
             reverse(arr.begin(), arr.begin() + i+1);
             reverse(arr.begin(), arr.begin() + k);
            
             k--;
            
             i =0;
             for(;i<n;i++)
                if(arr[i]!=i+1)  break;
            
             if(i==n)
                return res;
        }    
       return res;
    }
};
