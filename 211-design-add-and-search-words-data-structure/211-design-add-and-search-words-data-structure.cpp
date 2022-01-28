struct Trie{
      
        char val;
    int endsHere=0;
        struct Trie* child[26];
    };
class WordDictionary {
public:
    
    
   struct Trie * insert( char c)
    {
       struct Trie *node = new Trie;
        node->val = c;
        for(int i=0;i<26;i++)
            node->child[i] = NULL;
       node->endsHere = 0;
        return node;
    }
    
   struct Trie *root = insert('/');
    WordDictionary() {
        
    }
    
    void addWord(string word) {
       struct Trie * node = root;
        int i=0;
        for(; i<word.size();i++)
        {
            char c = word[i];
            if(node->child[c-'a']==NULL)
             node->child[c-'a'] = insert(c);
            node = node->child[c-'a'];
            
            if(i==word.size()-1)
                node->endsHere +=1;
        }
    }
    
    bool search(string word) {
        Trie *node = root;
        queue<Trie*> q;
        q.push(node);
        for(auto c : word)
        {
            int n = q.size();
            int f =0;
            while(n--)
            {
                Trie * p = q.front(); q.pop();
                
                if(c=='.')
                {
                    for(int i=0;i<26;i++)
                       if(p->child[i]) q.push(p->child[i]); 
                    f =1;
                }else if(p->child[c-'a']) {q.push(p->child[c-'a']); f =1;}
            }
            if(f==0) return 0;
        }
        
            int n = q.size();
           
            while(n--)
            {
                Trie * p = q.front(); q.pop();
                if(p && p->endsHere) return 1;
            }
        
        return 0;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */