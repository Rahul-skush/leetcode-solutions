class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        int i =1;
        for(;i<heights.size();i++)
        {
            int diff = heights[i] - heights[i-1];
            if(diff>0)
            {
                    pq.push(-diff);
                if(ladders<pq.size()){
                    int tp = pq.top(); pq.pop();
                    bricks+=tp;
                }
            }
            if(bricks<0) return i-1;
        }
        
        return i-1;
    }
};