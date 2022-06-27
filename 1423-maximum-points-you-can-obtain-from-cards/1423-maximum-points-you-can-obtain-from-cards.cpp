class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum =0;
        for(auto x : cardPoints)
            sum += x;
        int n = cardPoints.size();
        k = n - k;
        int i =0, j =0, ans = 0, dsum =0;
        if(k==0) return sum;
        while(j<n)
        {
            dsum += cardPoints[j++];
            if(j>=k)
                {
                ans = max(ans, sum - dsum);
                dsum -= cardPoints[i++];}
        }
        return ans;
    }
};