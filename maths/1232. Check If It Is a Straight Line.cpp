class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        double x1, y1, m, i =1, dif;
        for(auto v : coordinates)
        {
            if(i==1)
            {
                x1 = v[0]; y1 = v[1]; i++;
            }else
                if(i==2)
                {
                    if(v[0]==x1) m = INT_MAX;
                    else
                    m = (v[1] - y1)/(v[0]-x1);
                    i++;
                }else
                {
                    if(v[0]==x1) dif = INT_MAX;
                    else
                     dif = (v[1] - y1)/(v[0]-x1);
                        if(dif!=m) return 0;
                }
        }
        return 1;
    }
};
