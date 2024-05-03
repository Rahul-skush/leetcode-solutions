class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i =0, j=0, n =version1.size()+1, m =  version2.size()+1;
        version1 = '.' + version1;
        version2 = '.' + version2;
        while(i<n || j<m)
        {
            int num1 =0, num2 =0;
            while(i<n && version1[i]!='.') num1 = num1*10 + (version1[i++] - '0');
            
            while(j<m && version2[j]!='.') num2 = num2*10 + (version2[j++] - '0');
           // cout<<num1<<" "<<num2<<endl;
            i++; j++;
            if(num1>num2) return 1;
            if(num1<num2) return -1;
        }
        return 0;
    }
};