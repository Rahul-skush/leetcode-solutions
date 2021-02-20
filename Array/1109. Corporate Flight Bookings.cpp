class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> vis(n+2, 0);
        
        for(int i =0;i<bookings.size();i++)
        {
            vis[bookings[i][0]] += bookings[i][2];
            vis[bookings[i][1] +1 ] -= bookings[i][2];
        }
        
        for(int i=1;i<=n;i++)
            vis[i] += vis[i-1];
        
        return vector<int>(vis.begin()+1, vis.end()-1);
    }
};
