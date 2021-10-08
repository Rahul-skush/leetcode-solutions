class Trie {
public:
    
    struct TrieNode{
        char val;
        int count;
        int endHere;
        TrieNode* child[26];
    };
    
    TrieNode * root;
    
    TrieNode* addNode(int index){
        TrieNode * newNode = new TrieNode();
        newNode->val  = 'a' + index;
        newNode->count  =0;
        newNode->endHere =0;
        for(int i=0;i<26;i++)
            newNode->child[i] = NULL;
        return newNode;
    }
    
    public:
    Trie() {
        root = addNode('/'-'a');
    }
    
    void insert(string word) {
        TrieNode *node = root;
        for(auto c: word)
        {
            int index = c - 'a';
            if(node->child[index]==NULL)
                node->child[index] = addNode(index);
            node->child[index]->count = node->child[index]->count+1;
            
            node = node->child[index];
        }
        node->endHere += 1;
    }
    
    bool search(string word) {
        TrieNode *curr = root;
        for(auto c : word)
        {
            int index = c - 'a';
            if(curr->child[index]==NULL)
                return false;
            curr = curr->child[index];
        }
        if(curr->endHere>0) return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        TrieNode *curr = root;
        for(auto c : prefix)
        {
            int index = c - 'a';
            if(curr->child[index]==NULL)
                return false;
            curr = curr->child[index];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
