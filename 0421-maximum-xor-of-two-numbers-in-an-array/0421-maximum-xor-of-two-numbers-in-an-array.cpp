class Solution {
public:
    class TrieNode{
       public: int bit;
        TrieNode *left;
        TrieNode *right;
        TrieNode(int b){
            bit = b;
            left = NULL;
            right = NULL;
        }
    };
    int findMaximumXOR(vector<int>& nums) {
        TrieNode * root= new TrieNode(-1);
        
        for(auto x :  nums)
        {
            TrieNode * node = root;
            for(int i =31;i>=0;i--)
            {
                
                if(x&(1<<i))
                {
                    if(!node->left) node->left = new TrieNode(1);
                     node = node->left;
                }else{
                    if(!node->right) node->right = new TrieNode(0);
                    node = node->right;
                }
            }
        }
        
        int ans =0;
        for(auto x : nums)
        {
            TrieNode * node = root;
            int tmp =0;
            for(int i=31;i>=0;i--)
            {
                if(x&(1<<i))
                {
                    if(node->right)
                        {node = node->right; tmp += 1<<i;}
                    else{
                        node = node->left;
                    }
                }else{
                     if(node->left)
                        {node = node->left; tmp += 1<<i;}
                    else{
                        node = node->right;
                    }
                }
            }
            ans = max(ans, tmp);
        }
        
        return ans;
        
    }
};