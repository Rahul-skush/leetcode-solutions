class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
         vector<string> res;
        for(int i=0;i<folder.size();)
        {
            int j=i;
            int divs = findDivs(folder[i]);
            while(j<folder.size())
            {
                string str = findStr(folder[j], divs);
                if(str == folder[i])
                    j++;
                else break;
            }
            
            res.push_back(folder[i]);
            i = j;
        }
        return res;
    }
    int findDivs(string s)
    {
        int cnt =0;
        for(auto x : s)
        {
            cnt += x=='/';
        }
        return cnt;
    }
    
    string findStr(string s, int divs)
    {
        string str ="";
        int i=0;
        while(divs>=0 && i<s.size())
        {
            if(s[i]=='/')
                divs--;
            
            str += s[i++];
        }
        
        if(str.back()=='/')
            str.pop_back();
        return str;
    }
};