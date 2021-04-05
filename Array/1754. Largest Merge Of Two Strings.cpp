class Solution {
public:
    string largestMerge(string w1, string w2) {
        string merge = "";
        int i =0, j =0, n = w1.length(), m = w2.length();
        while(i<n && j<m)
        {
            
           if(w1.compare(i, w1.size()-i, w2, j , w2.size()-j)>0)
           {
               merge += w1[i++];
           }
            else
                merge += w2[j++];
        }
        
        while(i<n)
        {
            merge += w1[i]; i++;
        }
        
        while(j<m)
        {
            merge += w2[j]; j++;
        }
        
        return merge;
    }
};
