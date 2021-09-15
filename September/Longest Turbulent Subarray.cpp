class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int up = 1, down = 1, ans = 1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]>arr[i-1])
            {
                up = down +1;
                down =1;
            }else
                if(arr[i]<arr[i-1])
            {
                down = up +1;
                up =1;
            }else
                {
                 up =1;
                 down =1;
                }
            ans = max({ans, down, up});
        }
        return ans;
    }
};
