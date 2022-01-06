class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
        int i =0, n = arr.size(), ans =0;
        int prv =arr[0];
        i++;
        while(i<n)
        {
            int cnt =1, f1=0, f2=0;
            while(i<n && prv<arr[i])
            {
                prv =arr[i]; i++;
                cnt++;
                f1 =1;
            }
            
            while(i<n && prv>arr[i])
            {
                prv =arr[i]; i++;
                cnt++;
                f2=1;
            }
            if(i<n && prv==arr[i]) i++;
            if(f1+f2==2 && cnt>=3)
            ans = max(ans, cnt);
        }
        
        return ans;
    }
};