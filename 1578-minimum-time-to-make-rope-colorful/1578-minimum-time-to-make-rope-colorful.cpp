class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans = 0, i =0;
        while(i<colors.size())
        {
            char c = colors[i];
            int mx = 0, sum =0, cnt =0;
            while(i<colors.size() && c==colors[i])
            {
                mx = max(mx, neededTime[i]);
                sum += neededTime[i];
                i++;
                cnt++;
            }
            
            if(cnt>1)
                {sum -= mx;
                ans += sum;}
        }
        return ans;
    }
};