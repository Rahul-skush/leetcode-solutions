class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int n = heaters.size(), m = houses.size();
        int l =0, h = 1e9+7;
        while(l<h)
        {
            int mid = (l+h)/2;
            int i =0, j =0;
            while(i<n && j<m)
            {
                int left = heaters[i] - mid;
                int right = heaters[i] + mid;
                while(j<m && houses[j]>=left && houses[j]<=right)
                    j++;
                i++;
            }
           
           if(j<m) l = mid+1;
            else h = mid;
        }
        
        return l;
    }
};