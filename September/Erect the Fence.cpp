class Solution {
public:
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        if(trees.size()<=3) return trees;
        sort(trees.begin(), trees.end(), [&](vector<int> &v1, vector<int>&v2){
            return v1[1]<v2[1] || (v1[1]==v2[1] && v1[0]<v2[0]);
        });
        
        stack<vector<int>> st, stt;
        
        st.push({trees[0][0], trees[0][1]});
        st.push({trees[1][0], trees[1][1]});
        
        for(int i=2;i<trees.size();i++)
        {
            vector<int> tp = st.top(); st.pop();
            while(!st.empty() && check(st.top()[0], st.top()[1], tp[0], tp[1], trees[i][0], trees[i][1])>0)
                {tp = st.top(); st.pop();}
            st.push(tp);
            st.push({trees[i][0], trees[i][1]});
        }
        
        for(int i=trees.size()-2;i>=0;i--)
        {
           vector<int> tp = st.top(); st.pop();
            while(!st.empty() && check(st.top()[0], st.top()[1], tp[0], tp[1], trees[i][0], trees[i][1])>0)
                {tp = st.top(); st.pop();}
            st.push(tp);
            st.push({trees[i][0], trees[i][1]});
        }
        
        set<vector<int>> ans;
       
            while(!st.empty())
                {ans.insert(st.top()); st.pop();}
        
        vector<vector<int>> res(ans.begin(), ans.end());
        
        return res;
    }
    
    int check(int a1, int a2, int b1, int b2, int c1, int c2)
    {
        return (b1-a1)*(c2-a2) - (b2-a2)*(c1-a1);
    }
};
