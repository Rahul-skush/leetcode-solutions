class Solution {
public:
        vector<pair<int, int>> v;
        vector<pair<int, int>> tmp;
        vector<int> res;
    vector<int> countSmaller(vector<int>& nums) {
        int n =nums.size();
        v.resize(n); tmp.resize(n);  res.resize(n);
        
        for(int i=0;i<n;i++)
            v[i] = {nums[i], i};
        
           mergeSort( 0, n-1);
        return res;
    }
    
    void mergeSort(int low, int high)
    {
        if(high>low)
        {
            int mid = (low+high)/2;
            mergeSort(low, mid);
            mergeSort(mid+1, high);
            merge(low, mid+1, high);
        }
        return ;
    }
    
    void merge(int low, int mid, int high)
    {
        int i =low, j =mid, k =low;
        while(i<=mid-1&& j<=high)
        {
            if(v[i].first>v[j].first)
            {
                res[v[i].second] += high -j+1;
                tmp[k++] = v[i++];
            }
            else
                tmp[k++]=v[j++];
        }
        while(i<=mid-1)
            tmp[k++]=v[i++];
        while(j<=high)
            tmp[k++]=v[j++];
        
        for(int i=low;i<=high;i++)
            v[i]=tmp[i];
    }
};