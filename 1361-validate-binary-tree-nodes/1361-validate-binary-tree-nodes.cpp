class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int> indegree(n, 0);
        for(int i=0;i<n;i++)
        {
            if(leftChild[i]!=-1) indegree[leftChild[i]] += 1;
            if(rightChild[i]!=-1) indegree[rightChild[i]] += 1;
        }
        
        int val = -1;
        for(int i=0;i<n;i++)
            if((indegree[i]==0 && val!=-1) || indegree[i]>1) return false;
            else if(indegree[i]==0) val = i;
        
        if(val==-1) return false;
        
        vector<int> vis(n, 0);
        queue<int> q;
        q.push(val);
        while(!q.empty())
        {
            int m = q.size();
            for(int i=0;i<m;i++)
            {
                int p = q.front(); q.pop();
                if(vis[p]) return false;
                vis[p] = true;
                if(leftChild[p]!=-1) q.push(leftChild[p]);
                if(rightChild[p]!=-1) q.push(rightChild[p]);
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0) return false;
        }
       return true;;
    }
};