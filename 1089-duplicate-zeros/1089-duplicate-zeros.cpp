class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size(), cnt =0;
        for(auto x : arr)
            cnt+=x==0;
        int i =n-1, j = j =n+cnt;
        while(i>=0)
        {
            if(--j<n)
                arr[j] = arr[i];
            if(arr[i]==0 && --j<n)
                arr[j] = 0;
            i--;
        }
    }
};