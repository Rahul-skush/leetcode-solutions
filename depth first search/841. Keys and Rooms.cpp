class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        set<int> s;
        dfs(rooms, s, 0);
        return (s.size()>=rooms.size());
    }
    
    void dfs(vector<vector<int>>& rooms, set<int> &s, int rm)
    {
        if(s.find(rm)==s.end()){
            s.insert(rm);
           for(int i=0;i<rooms[rm].size();i++)
            {
                dfs(rooms, s, rooms[rm][i]);
            }
            
        }else
            return;
    }
};
