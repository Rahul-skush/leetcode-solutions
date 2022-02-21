class Solution {
public:
    int repeatedStringMatch(string a, string b) {
       for(int i =0;i<a.size();i++)
       {
           int j =0;
           for(;j<b.size() && a[(i+j)%a.size()]==b[j];j++);
           if(j==b.size()) return (i+j-1)/a.size()+1;
       }
        return -1;
    }
};