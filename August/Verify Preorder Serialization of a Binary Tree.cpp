class Solution {
public:
    bool isValidSerialization(string preorder) {
        int v= 1;
        for(int i=0;i<preorder.size();)
        {
            if(v<=0) return 0;
            //cout<<v<<" ";
            if(preorder[i]==',') {i++;}
            if(preorder[i]=='#') {i++;  v = v-1; continue;}

            while(i<preorder.size() && preorder[i]!=',') i++;
                v = v-1 +2;
          
        }
        return v==0;
    }
};
