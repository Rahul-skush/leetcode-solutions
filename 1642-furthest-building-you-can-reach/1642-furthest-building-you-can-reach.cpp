class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int> pq;
        for(int i=1;i<heights.size();i++)
        {
            int diff = heights[i]- heights[i-1];
            if(diff>0)
            {
                 if(bricks>=diff)
                    {pq.push(diff); bricks-=diff; }
                 else if(ladders){
                        if(!pq.empty() && diff<pq.top())
                        {
                           bricks += pq.top();
                            pq.pop();
                            bricks -= diff;
                            pq.push(diff);
                        }
                     ladders--; 
                    }
                else return i-1;
            }
        }
        return heights.size()-1;
    }
};