class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        for(int i=0;i<heights.size()-1;i++)
        {
            int x = heights[i+1], y = heights[i];
            if(x-y<=0) continue;
            if(x-y<=bricks) {bricks -= x-y; pq.push(x-y);}
            else if(ladders)
            {
                if(!pq.empty() && x-y<pq.top()){
                    bricks+= pq.top(); pq.pop();
                    bricks-=(x-y); pq.push((x-y));
                    ladders--;
                }
                else
                ladders--;
            }
            else return i;
        }
        return heights.size()-1;
    }
};
