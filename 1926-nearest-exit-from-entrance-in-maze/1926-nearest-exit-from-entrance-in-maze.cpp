class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<vector<int>> q;
        q.push(entrance);
        int dist =0, n = maze.size() , m = maze[0].size();
        maze[entrance[0]][entrance[1]] = '+';
        while(!q.empty())
        {
            int sz = q.size();
            for(int i=0;i<sz;i++)
            {
                vector<int> v = q.front(); q.pop();
                
                for(auto d :  dirs)
                {
                    int x = v[0] + d[0], y = v[1] + d[1];
                    if((x<0 || y<0 || x==n || y==m) && dist!=0)
                       return dist;
                    if(x>=0 && y>=0 && x<n && y<m && maze[x][y]=='.')
                        {q.push({x, y}); maze[x][y] = '+';}
                }
            }
            dist++;
        }
        return -1;
    }
    vector<vector<int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
};