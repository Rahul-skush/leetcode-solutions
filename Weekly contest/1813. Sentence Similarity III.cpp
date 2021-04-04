class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        int i = 0, n1 = s1.length()-1, m1 = s2.length()-1;
        
        vector<string> x1, x2;
        string str;
        while(i<=n1)
           {
            if(s1[i]==' ')
             {x1.push_back(str); str = "";}
            else
            str += s1[i];
            i++;
          }
          if(str!="")
            x1.push_back(str);
        str = "";
        i = 0;
        s1 = s2;
        while(i<=m1)
           { 
            if(s1[i]==' ')
             {x2.push_back(str); str = "";}
            else
            str += s1[i];
            i++;
          }
        if(str!="")
            x2.push_back(str);
        
        int n = x1.size()-1, m = x2.size()-1;
        
        if(exists(x1, x2) || exists(x2, x1))
         return 1;
        return 0;
    }
    
    
    bool  exists(vector<string> v1, vector<string> v2)
    {
        int i = 0, cnt = 0;
        for(auto s : v1)
        {
            if( i <v2.size() && v2[i]==s) {i++; cnt++;}
            else break;
        }
        int j = v2.size()-1;
        for(int k = v1.size()-1;k>=0;k--)
        {
            if(j>=0 && v2[j]==v1[k]) {j--; cnt++;}
            else break;
        }
        if(cnt>=v2.size()) return 1;
        return 0;
    }
};
