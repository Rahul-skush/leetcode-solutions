class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), [&](vector<int> &v1, vector<int> &v2){
           return v1[1]<v2[1]; 
        });
        
        int t =0;
        priority_queue<int> pq;
        for(auto x : courses)
        {
            t += x[0];
            pq.push(x[0]);
            if(t>x[1]) t-= pq.top(), pq.pop();
        }
        return pq.size();
    }
};
