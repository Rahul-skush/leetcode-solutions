class Solution {
public:
    int racecar(int target) {
        priority_queue<vector<long long>, vector<vector<long long>>, greater<vector<long long>>> pq;
        pq.push({0, 0, 1});
        set<pair<long long, long long>> st;
        st.insert({0, 1});
        
        while(!pq.empty())
        {
            vector<long long> v = pq.top();
            pq.pop();
            if(v[1]>10000 || v[1]<0) continue;
            if(v[1]==target) return v[0];
            
            if(st.count({v[1] + v[2], 2*v[2]})==0)
            {pq.push({v[0] +1, v[1] + v[2], 2*v[2]}); 
            st.insert({v[1]+v[2], 2*v[2]});}
            if(v[2]>=0 && st.count({v[1], -1})==0)
            {pq.push({v[0] +1, v[1], -1}); st.insert({v[1], -1});}
            else if(v[2]<0 && st.count({v[1], 1})==0) 
                {pq.push({v[0] +1, v[1], 1});
                st.insert({v[1], 1});}
        }
        return -1;
    }
};