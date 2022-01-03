class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        
        if(str1.size()>str2.size()) swap(str1, str2);
        
        string ans;
        for(int i=0;i<str1.size();i++)
        {
            int j=0, k=0;
            while(j<str2.size())
            {
                if(str2[j]!=str1[k]) break;
                k++; j++;
                if(k>i) k=0;
            }
            
            if(j==str2.size() && k==0) 
            {
            string ss = str1.substr(0, i+1);
               // cout<<ss<<" ";
                int j=0, k=0;
                while(j<str1.size())
                {
                    if(str1[j]!=ss[k]) break;
                    k++; j++;
                    if(k>=ss.size()) k=0;
                }
                if(k==0 && j==str1.size()) ans = ss;
            }
        }
       // cout<<endl;
        return ans;
    }
};