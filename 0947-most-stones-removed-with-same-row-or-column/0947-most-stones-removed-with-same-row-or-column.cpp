class Solution {
public:
    unordered_map<int, int> prnt;
    int indexes =0;
    int removeStones(vector<vector<int>>& stones) {
        for(auto x :  stones)
        {
            unionF(x[0], ~x[1]);
        }
        return stones.size() - indexes;
    }
    
    int find(int x)
    {
        if(prnt.count(x)==0) {prnt[x] =x; indexes++;}
        if(prnt[x]!=x)  prnt[x] = find(prnt[x]);
        return prnt[x];
    }
    
    void unionF(int x, int y)
    {
        x = find(x), y = find(y);
        if(x!=y) {prnt[x] = y; indexes--;}
    }
};