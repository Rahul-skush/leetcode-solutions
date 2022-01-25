/*
// Definition for a QuadTree node.
class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;
    
    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }
    
    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};
*/

class Solution {
public:
    Node* construct(vector<vector<int>>& grid) {
        return findNode(grid, 0, 0, grid.size(), grid.size());
    }
    
    Node * findNode(vector<vector<int>> &grid, int x1, int y1, int x2, int y2)
    {
        int n = x2-x1, cnt1=0;
        for(int i=y1;i<y2;i++)
        {
            for(int j=x1;j<x2;j++)
            {
                cnt1 += grid[i][j];
            }
        }
        //cout<<cnt1<<" ";
        Node * root = new Node(1, 1);
        if(cnt1==n*n || cnt1==0)
            {root->isLeaf = true; root->val = cnt1/(n*n);
            return root;}
        else {root->isLeaf = false; root->val = 1;}
        
        
        
root->topLeft = findNode(grid, x1, y1, (x2+x1)/2, (y2+y1)/2);
root->topRight = findNode(grid, (x2+x1)/2, y1, x2, (y2+y1)/2);
root->bottomLeft = findNode(grid, x1, (y2+y1)/2, (x2+x1)/2, y2);
root->bottomRight = findNode(grid, (x2+x1)/2, (y2+y1)/2, x2, y2);
        
        return root;
    }
};