class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int> v(n, 0);
        int cnt =0, root=-1;
        for(int i=0;i<n;i++)
        {
            if(leftChild[i]!=-1) v[leftChild[i]]++;
            if(rightChild[i]!=-1) v[rightChild[i]]++;
        }
        
        for(int i=0;i<n;i++)
            if(v[i]>1) return 0;
        for(int i=0;i<n;i++)
            if(v[i]==0) {cnt++; root = i;}
        if(cnt>1 || root==-1) return 0;
        
        return find(leftChild, rightChild, root)==n;
    }
    
    int find(vector<int> &l, vector<int> &r, int root)
    {
        if(root==-1) return 0;
        
        return 1 + find(l, r, l[root]) + find(l, r, r[root]);
    }
};