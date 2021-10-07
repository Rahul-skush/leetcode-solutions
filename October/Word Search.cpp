class Solution {
public:
    int n, m;
    bool exist(vector<vector<char>>& board, string word) 
    {
        n = board.size(), m = board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]==word[0] && find("", board, word, i, j, 0))
                    return 1;
            }
        }
        return 0;
    }
    
    bool find(string s, vector<vector<char>> &board, string &word, int i, int j, int k)
    {
        //cout<<s<<" ";
        if(s==word) return true;
        if(i<0 || j<0 || i>=n || j>=m || board[i][j]=='0' || board[i][j]!=word[k]) return false;
        char c = board[i][j];
        
        board[i][j] = '0';
        s += c;
        int x = find(s, board, word, i+1, j, k+1) || find(s, board, word, i-1, j, k+1)
              || find(s, board, word, i, j+1, k+1) ||find(s, board, word, i, j-1, k+1);
        
        board[i][j] = c;
        if(x) return 1;
        return 0;
        
    }
};
