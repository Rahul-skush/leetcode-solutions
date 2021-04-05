class Solution {
public:
    int findBestValue(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int n = arr.size(),sum =0, m =-1;
        
        for(auto x : arr)
            {sum += x; m = max(m, x);}
        if(sum<=target) return m;
        
        int rmd =0, lsind = n-1;
        while(lsind>=0 && target < sum + rmd*arr[lsind])
        {
            rmd++;
            sum -= arr[lsind];
            lsind--;
        }
        
        int v = (target - sum)/rmd;
        
        if(abs(target - (v*rmd + sum))<=abs(target - ((v+1)*rmd + sum)))
            return v;
        return v +1;
    }
};
