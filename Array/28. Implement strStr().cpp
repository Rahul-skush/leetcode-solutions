class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        for(int i =0;i<n;i++)
        {
            int k = 0, j = i;
            while(j<n && k<m && haystack[j]==needle[k]){
                j++; k++;
            }
            if(k==m) return i;
        }
        return m==0?0:-1;
    }
};
