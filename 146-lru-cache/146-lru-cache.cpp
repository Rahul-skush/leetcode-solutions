class LRUCache {
public:
    
    class Node{
     public : int key;
      int value;
        Node *prev, *next;
       Node(int key, int value)
       {
           this->key = key;
           this->value = value;
       }
    };
    
    int cap;
    unordered_map<int, Node*> mp;
    Node *head = new Node(-1,-1);
    Node *tail = new Node(-1, -1);
    
    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if(mp.count(key))
        {
            Node * node = mp[key];
            int res = node->value;
            mp.erase(key);
            deleteNode(node);
            Node *newNode = new Node(key, res);
            addNode(newNode);
            mp[key] = head->next;
            return res;
        }
        
        return -1;
    }
    
    void addNode(Node *node)
    {
        Node *next = head->next;
        head->next = node;
        node->prev = head;
        node->next = next;
        next->prev = node;
    }
    
    void deleteNode(Node *node)
    {
        Node *next = node->next;
        Node *prev = node->prev;
        delete(node);
        next->prev = prev;
        prev->next = next;
    }
    
    void put(int key, int value) {
        if(mp.count(key))
            {
                Node *node = mp[key];
                mp.erase(key);
                deleteNode(node);
            }
        if(cap==mp.size())
        {  
            mp.erase(tail->prev->key);
                deleteNode(tail->prev);
        }
        
         Node *newNode = new Node(key, value);
         addNode(newNode);
        mp[key]  = head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */