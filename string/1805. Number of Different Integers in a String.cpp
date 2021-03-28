class Solution {
public:
    int numDifferentIntegers(string s) {
        set<string>st;
        int f = 0;
        for(int i=0;i<s.length();i++)
        {
            string str = "";
            while(i<s.length() && !isalpha(s[i]))
            {
                if(str=="" && s[i]=='0'){f = 1;  i++;}
                else
                {str += s[i]; i++; f = 0;}
            }
           
            if(str!="")
                st.insert(str);
            if(str=="" && f)
                st.insert("0");
        }
      
        cout<<endl;
        return st.size();
    }
};
