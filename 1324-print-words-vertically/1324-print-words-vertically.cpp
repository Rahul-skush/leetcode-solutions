class Solution {
public:
    vector<string> printVertically(string s) {
        int mxSize =0;
        stringstream ss(s);
        vector<string> v, res;
        string str;
        while(ss>>str)
        {
           v.push_back(str); 
            mxSize = max(mxSize, (int)str.size());
        }
        int j=0;
        while(j<mxSize)
        {
            str = "";
            int  k =-1;
            for(int i=0;i<v.size();i++)
            {
                if(v[i].size()>j)
                    {str += v[i][j]; k = i;}
                else str += " ";
            }
            str = str.substr(0, k+1);
            res.push_back(str);
            j++;
        }
        return res;
    }
};