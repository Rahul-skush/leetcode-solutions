class Solution {
public:
    vector<int> constructArray(int n, int k) {
        int i =1, j = n;
        vector<int> res;
        while(k>0)
        {
            if(k--) res.push_back(i++);
            if(k>0 && k--) res.push_back(j--);
        }
        
        int x = res.back();
        if(x+1==i)
       { while(i<=j)
            res.push_back(i++);}
        else
        {
            while(i<=j)
                res.push_back(j--);
        }
        return res;
    }
};
