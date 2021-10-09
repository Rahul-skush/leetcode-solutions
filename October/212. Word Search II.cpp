class Solution {
public:
    
    struct TrieNode {
      int index;
        int ends;
        string word;
        TrieNode * child[26];
    };
    TrieNode * root;
    TrieNode* addNode(char c)
    {
        int index = c -'a';
        TrieNode *node= new TrieNode();
        node->index = index;
        node->ends =0;
        for(int i=0;i<26;i++)
            node->child[i] = NULL;
        return node;
    }
    
    void insert(string s)
    {
        TrieNode * curr = root;
        int i =0;
        while(i<s.size())
        {
            int index = s[i] - 'a';
            if(curr->child[index]==NULL)
                curr->child[index] = addNode(s[i]);
            curr = curr->child[index];
            i++;
        }
        curr->ends += 1;
        curr->word = s;
    }
    int n, m;
    vector<string> ans;
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        root = addNode('/');
        for(auto s : words)
        {
            insert(s);
        }
        
         n = board.size(); m = board[0].size();
            for(int i=0;i<n;i++)
                for(int j=0;j<m;j++)
                       {
                           dfs(board, i, j, root);
                       }
        return ans;
    }
                       
        bool dfs(vector<vector<char>>& board, int i, int j, TrieNode* root)
       {
          if(i<0 || j<0 || i>=n || j>=m || board[i][j]=='1') return false;
           char c = board[i][j];
           int index = c -'a';
           if(root->child[index]==NULL)
               return false;
           if(root->child[index]->ends>=1)
               {ans.push_back(root->child[index]->word);
                root->child[index]->ends = -1;}
           board[i][j] = '1';
           dfs(board, i+1, j, root->child[index]);
           dfs(board, i-1, j, root->child[index]);
           dfs(board, i, j+1, root->child[index]);
           dfs(board, i, j-1, root->child[index]);
           
           board[i][j] = c;
            return true;
       }
};
