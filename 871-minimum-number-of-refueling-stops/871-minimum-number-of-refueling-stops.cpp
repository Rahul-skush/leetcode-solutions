class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        sort(stations.begin(), stations.end());
        int dist =startFuel, cnt=0;
        priority_queue<int> pq;
        for(vector<int> p : stations)
        {
            if(dist>=p[0])
                pq.push(p[1]);
            else{
                while(dist<p[0] && !pq.empty())
                {
                    dist += pq.top(); pq.pop();
                    cnt++;
                }
                if(dist<p[0])  return -1;
                pq.push(p[1]);
            }
            if(dist>=target)  return cnt;
        }
        
        while(dist<target && !pq.empty())
                {
                    dist += pq.top(); pq.pop();
                    cnt++;
                }
        if(dist>=target)  return cnt;
        return -1;
    }
};