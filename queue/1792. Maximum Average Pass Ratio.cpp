class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<pair<double, array<int, 2>>> pq;
         double sum = 0;
        for(auto x : classes)
        {
            double y = profit(x[0], x[1]);
            sum += (double)x[0]/x[1];
            pq.push({y,{x[0], x[1]}});
        }
        int k = classes.size();
        while(extraStudents--)
        {
            auto [prft, c]  = pq.top();
            pq.pop();
            sum += prft;
            pq.push({profit(c[0]+1, c[1]+1), {c[0]+1, c[1]+1}});
        }
       
        return sum/k;
    }
    double profit(double x, double y)
    {
        return (double)((x+1)/(y+1)-x/y);
    }
};
