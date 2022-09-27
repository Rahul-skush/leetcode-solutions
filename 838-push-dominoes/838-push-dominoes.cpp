class Solution {
public:
    string pushDominoes(string s) {
        int j = -1;
        int i=0;
        while(i<s.size())
        {
            if(s[i]!='.')
            {
               if(j==-1)
                   j = i;
                else{
                   string st ="";
                    st+=s[j] ;
                    st+=s[i];
                     int m = j + (i-j)/2, diff = i-j;
                     j+=1;
                  //  cout<<j<<" "<<i<<endl;
                    if(st=="RL" && diff>1)
                    {
                        while(j<m)
                            {s[j] = 'R'; j++;}
                        if(diff%2==0)
                        j+=1;
                        else s[j++] = 'R';
                        while(j<i)
                            {s[j] = 'L'; j++;}
                    }else if(st=="LR" && diff>1)
                    {
                        ;
                    }else if(st=="LL" && diff>1)
                    {
                        while(j<i)
                            {s[j]='L'; j++;}
                    }else if(st=="RR" && diff>1)
                    {
                        while(j<i)
                            {s[j]='R'; j++;}
                    }
                    j =i;
                }
            }
                i++;
        }
        
        j = 0;
        while(j<s.size() && s[j]=='.') j++;
        if(j==s.size()) return s;
         i =0;
        while(i<j && s[j]=='L') s[i++] = 'L';
        j = s.size()-1;
        while(j>=0 && s[j]=='.') j--;
         i =s.size()-1;
        while(i>j && s[j]=='R') s[i--] = 'R';
        
        //cout<<endl;
        return s;
    }
};