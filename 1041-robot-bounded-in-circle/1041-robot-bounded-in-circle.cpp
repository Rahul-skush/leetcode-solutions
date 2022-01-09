class Solution {
public:
    bool isRobotBounded(string instructions) {
        
        string s = instructions;
        s += instructions;
        s += instructions;
        s += instructions;
        
        vector<int> v = {0, 0, 1};
        
        for(auto c : s)
        {
            int d = v[2];
            if(c=='G')
            {
                if(d==1) v = {v[0], v[1]+1, d};
                if(d==2) v = {v[0]+1, v[1], d};
                if(d==3) v = {v[0], v[1]-1, d};
                if(d==4) v = {v[0]-1, v[1], d};
            }else if(c=='L'){
                if(d==1) v = {v[0], v[1], 4};
                if(d==2) v = {v[0], v[1], 1};
                if(d==3) v = {v[0], v[1], 2};
                if(d==4) v = {v[0], v[1], 3};
            } else {
                if(d==1) v = {v[0], v[1], 2};
                if(d==2) v = {v[0], v[1], 3};
                if(d==3) v = {v[0], v[1], 4};
                if(d==4) v = {v[0], v[1], 1};
            }
            
            
        }
        if(v[0]==0 && v[1]==0) return 1;
        return 0;
    }
};