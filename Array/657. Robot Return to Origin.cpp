class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y =0;
        for(auto c : moves)
        {
            if(c=='R') x++;
            if(c=='L') x--;
            if(c=='U') y++;
            if(c=='D') y--;
        }
        return x==0 && y==0;
    }
};
