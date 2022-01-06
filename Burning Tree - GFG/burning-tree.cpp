// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  map<int, vector<int>> mp;
    int minTime(Node* root, int target) 
    {
        find(root, NULL);
        
        queue<int> q;
        int n = mp.size();
        vector<bool> vis(10002, 0);
        vis[target] =1;
        q.push(target);
        int cnt =-1;
        //cout<<n<<endl;
        while(!q.empty())
        {
            int m = q.size();
            while(m--)
            {
                int x = q.front(); q.pop();
                //cout<<x<<" ";
                
                for(auto it : mp[x])
                {
                    if(vis[it]==0)
                    {q.push(it); vis[it]= 1;}
                } 
            }
            cnt++;
            //cout<<endl;
        }
        
        return cnt; 
        
    }
    
    void find(Node * root, Node * parent)
    {
        if(!root) return ;
        if(parent && root) 
        {mp[root->data].push_back(parent->data); mp[parent->data].push_back(root->data);}
         find(root->left, root);
         find(root->right, root);
    }
};

// { Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}
  // } Driver Code Ends