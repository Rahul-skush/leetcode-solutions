class Solution {
public:
    string simplifyPath(string path) {
        vector<string> v;
        int i=0, n = path.size();
        while(i<n)
        {
            string str;
            while(i<n && path[i]!='/')
                str += path[i++];
            if(str==".." && v.size()) v.pop_back();
            else if(str!="." && str!=".." && str.size()) v.push_back(str);
          
            i++;
        }
        
        string ans;
        for(auto x : v)
            {
            ans +="/";
            ans += x;
            }
        return ans.size()?ans:"/";
    }
};