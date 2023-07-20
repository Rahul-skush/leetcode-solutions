class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(auto x :  asteroids)
        {
            int f =0;
            while(!st.empty() && x<0 && st.top()>0)
            {
                if(abs(x)<st.top()){f=1; break;}
                if(abs(x)==st.top()) {st.pop(); f =1; break;}
                st.pop();
            }
            if(f) continue;
           st.push(x);
        }
        
        vector<int> res;
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
    
    int sign(int x)
    {
        return x>0;
    }
};