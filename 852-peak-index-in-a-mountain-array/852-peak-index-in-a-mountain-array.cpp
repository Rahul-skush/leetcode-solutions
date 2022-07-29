class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, high = arr.size()-1;
        while(low<high)
        {
            int mid = (low + high)/2;
            if(mid+1<arr.size() && mid-1>=0)
            {
                if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) return mid;
            }
            if(mid+1<arr.size())
            {
                if(arr[mid+1]>arr[mid]) low = mid+1;
                else high = mid;
            }else{
                if(arr[mid-1]>arr[mid]) high = mid;
                else low = mid+1;
            }
        }
        
        return low;
    }
};