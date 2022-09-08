class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i =0, j =0, cnt =0;
        double sum = 0;
        while(j<arr.size())
        {
            sum += arr[j];
            if(j>=k-1)
            {
                cnt += sum/k>=threshold;
                sum -= arr[i++];
            }
            j++;
        }
        return cnt;
    }
};